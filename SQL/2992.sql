WITH salarios AS (
    SELECT
        e.matr,
        e.lotacao_div,
        COALESCE(SUM(v.valor), 0) AS salario
    FROM empregado e
    LEFT JOIN emp_venc ev
        ON e.matr = ev.matr
    LEFT JOIN vencimento v
        ON ev.cod_venc = v.cod_venc
    GROUP BY e.matr, e.lotacao_div
),
descontos AS (
    SELECT
        e.matr,
        COALESCE(SUM(d.valor), 0) AS desconto
    FROM empregado e
    LEFT JOIN emp_desc ed
        ON e.matr = ed.matr
    LEFT JOIN desconto d
        ON ed.cod_desc = d.cod_desc
    GROUP BY e.matr
),
medias AS (
    SELECT
        dep.cod_dep,
        dep.nome AS departamento,
        div.cod_divisao,
        div.nome AS divisao,
        AVG(s.salario - COALESCE(d.desconto, 0)) AS media
    FROM salarios s
    LEFT JOIN descontos d
        ON s.matr = d.matr
    JOIN divisao div
        ON s.lotacao_div = div.cod_divisao
    JOIN departamento dep
        ON div.cod_dep = dep.cod_dep
    GROUP BY
        dep.cod_dep,
        dep.nome,
        div.cod_divisao,
        div.nome
),
maiores AS (
    SELECT
        cod_dep,
        MAX(media) AS maior_media
    FROM medias
    GROUP BY cod_dep
)
SELECT
    m.departamento,
    m.divisao,
    ROUND(m.media, 2) AS media
FROM medias m
JOIN maiores mai
    ON m.cod_dep = mai.cod_dep
   AND m.media = mai.maior_media
ORDER BY m.media DESC;