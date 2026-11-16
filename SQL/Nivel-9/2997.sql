-- Beecrowd | 2997 - Pagamento dos Empregados
-- Categoria: SQL | Nível 9 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2997

SELECT

    d.nome AS "Departamento",

    e.nome AS "Empregado",



    CASE

        WHEN COALESCE(v.salario_bruto, 0) = 0 THEN 0

        ELSE ROUND(v.salario_bruto, 2)

    END AS "Salario Bruto",



    CASE

        WHEN COALESCE(des.total_desconto, 0) = 0 THEN 0

        ELSE ROUND(des.total_desconto, 2)

    END AS "Total Desconto",



    CASE

        WHEN COALESCE(v.salario_bruto, 0)

             - COALESCE(des.total_desconto, 0) = 0

        THEN 0

        ELSE ROUND(

            COALESCE(v.salario_bruto, 0)

            - COALESCE(des.total_desconto, 0),

            2

        )

    END AS "Salario Liquido"



FROM empregado e



LEFT JOIN departamento d

    ON e.lotacao = d.cod_dep



LEFT JOIN (

    SELECT

        ev.matr,

        SUM(v.valor) AS salario_bruto

    FROM emp_venc ev

    JOIN vencimento v

        ON ev.cod_venc = v.cod_venc

    GROUP BY ev.matr

) v

    ON e.matr = v.matr



LEFT JOIN (

    SELECT

        ed.matr,

        SUM(d.valor) AS total_desconto

    FROM emp_desc ed

    JOIN desconto d

        ON ed.cod_desc = d.cod_desc

    GROUP BY ed.matr

) des

    ON e.matr = des.matr



ORDER BY

    (

        COALESCE(v.salario_bruto, 0)

        - COALESCE(des.total_desconto, 0)

    ) DESC,

    e.lotacao_div DESC;