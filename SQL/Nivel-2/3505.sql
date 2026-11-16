-- Beecrowd | 3505 - Controle de Ingredientes
-- Categoria: SQL | Nível 2 | Assunto: SQL
-- Link: https://judge.beecrowd.com/pt/problems/view/3505

SELECT nome, kg

FROM ingrediente

WHERE kg > 0

  AND kg < 10

ORDER BY kg ASC;