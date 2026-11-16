-- Beecrowd | 2613 - Filmes Baratos
-- Categoria: SQL | Nível 2 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2613

SELECT movies.id AS id, movies.name AS name

FROM movies

JOIN prices

    ON movies.id_prices = prices.id 

WHERE prices.value < 2.00;