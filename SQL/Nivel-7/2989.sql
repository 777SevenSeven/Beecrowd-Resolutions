-- Beecrowd | 2989 - Departamentos e Divisões
-- Categoria: SQL | Nível 7 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2989

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

    GROUP BY

        e.matr,

        e.lotacao_div

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

    GROUP BY

        e.matr

),

salarios_liquidos AS (

    SELECT

        s.matr,

        s.lotacao_div,

        s.salario - COALESCE(d.desconto, 0) AS salario

    FROM salarios s

    LEFT JOIN descontos d

        ON s.matr = d.matr

)



SELECT

    dep.nome AS departamento,

    div.nome AS divisao,

    ROUND(AVG(sl.salario), 2) AS media,

    MAX(sl.salario) AS maior

FROM salarios_liquidos sl

JOIN divisao div

    ON sl.lotacao_div = div.cod_divisao

JOIN departamento dep

    ON div.cod_dep = dep.cod_dep

GROUP BY

    dep.cod_dep,

    dep.nome,

    div.cod_divisao,

    div.nome

ORDER BY

    AVG(sl.salario) DESC;