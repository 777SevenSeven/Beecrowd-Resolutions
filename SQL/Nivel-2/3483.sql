-- Beecrowd | 3483 - Segundo Maior e Menor
-- Categoria: SQL | Nível 2 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/3483

(

    SELECT city_name, population

    FROM cities

    ORDER BY population DESC

    LIMIT 1 OFFSET 1

)

UNION ALL

(

    SELECT city_name, population

    FROM cities

    ORDER BY population ASC

    LIMIT 1 OFFSET 1

);