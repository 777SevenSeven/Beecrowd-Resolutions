-- Beecrowd | 2743 - Quantidade de Caracteres
-- Categoria: SQL | Nível 3 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2743

SELECT name, CHARACTER_LENGTH(people.name) AS length

FROM people

ORDER BY length DESC

