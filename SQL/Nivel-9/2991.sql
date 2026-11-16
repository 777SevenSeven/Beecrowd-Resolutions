-- Beecrowd | 2991 - Estatísticas dos Departamentos
-- Categoria: SQL | Nível 9 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2991

SELECT

    d.nome AS "Nome Departamento",

    COUNT(e.matr) AS "Numero de Empregados",

    ROUND(AVG(COALESCE(v.salario, 0)), 2) AS "Media Salarial",

    MAX(COALESCE(v.salario, 0)) AS "Maior Salario",

    MIN(COALESCE(v.salario, 0)) AS "Menor Salario"

FROM empregado e

JOIN departamento d

    ON e.lotacao = d.cod_dep



LEFT JOIN (

    SELECT

        e1.matr,

        COALESCE(SUM(v.valor), 0)

        - COALESCE((

            SELECT SUM(des.valor)

            FROM emp_desc ed

            JOIN desconto des

                ON ed.cod_desc = des.cod_desc

            WHERE ed.matr = e1.matr

        ), 0) AS salario

    FROM empregado e1

    LEFT JOIN emp_venc ev

        ON e1.matr = ev.matr

    LEFT JOIN vencimento v

        ON ev.cod_venc = v.cod_venc

    GROUP BY e1.matr

) v

    ON e.matr = v.matr



GROUP BY

    d.cod_dep,

    d.nome



ORDER BY

    AVG(COALESCE(v.salario, 0)) DESC;