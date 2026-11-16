-- Beecrowd | 2611 - Filmes de Ação
-- Categoria: SQL | Nível 4 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2611

SELECT movies.id, movies.name

FROM movies

JOIN genres

    ON genres.id = movies.id_genres

WHERE genres.description = 'Action';