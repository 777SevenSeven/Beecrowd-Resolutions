-- Beecrowd | 2737 - Advogados
-- Categoria: SQL | Nível 6 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2737

SELECT name, customers_number

FROM (

    SELECT name, customers_number

    FROM lawyers

    ORDER BY customers_number DESC

    LIMIT 1

) AS maximo



UNION ALL



SELECT name, customers_number

FROM (

    SELECT name, customers_number

    FROM lawyers

    ORDER BY customers_number ASC

    LIMIT 1

) AS minimo



UNION ALL



SELECT name, customers_number

FROM (

    SELECT 'Average' AS name,

           CAST(AVG(customers_number) AS INTEGER) AS customers_number

    FROM lawyers

) AS media

