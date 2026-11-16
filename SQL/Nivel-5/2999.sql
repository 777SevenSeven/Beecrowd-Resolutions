-- Beecrowd | 2999 - Maior Sálario da Divisão
-- Categoria: SQL | Nível 5 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2999

WITH descontos AS (

    SELECT

        ed.matr,

        SUM(d.valor) AS desconto

    FROM emp_desc ed

    JOIN desconto d

        ON ed.cod_desc = d.cod_desc

    GROUP BY ed.matr

),



vencimentos AS (

    SELECT

        ev.matr,

        SUM(v.valor) AS vencimento

    FROM emp_venc ev

    JOIN vencimento v

        ON ev.cod_venc = v.cod_venc

    GROUP BY ev.matr

),



salarios AS (

    SELECT

        e.matr,

        e.nome,

        e.lotacao_div,

        COALESCE(v.vencimento, 0)

        - COALESCE(d.desconto, 0) AS salario

    FROM empregado e

    LEFT JOIN vencimentos v

        ON e.matr = v.matr

    LEFT JOIN descontos d

        ON e.matr = d.matr

),



medias AS (

    SELECT

        lotacao_div,

        AVG(salario) AS media

    FROM salarios

    GROUP BY lotacao_div

)



SELECT

    s.nome,

    ROUND(s.salario, 2) AS salario

FROM salarios s

JOIN medias m

    ON s.lotacao_div = m.lotacao_div

WHERE s.salario > m.media

  AND s.salario >= 8000

ORDER BY

    s.lotacao_div,

    s.nome;