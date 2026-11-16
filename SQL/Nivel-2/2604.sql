-- Beecrowd | 2604 - Menores que 10 ou Maiores que 100
-- Categoria: SQL | Nível 2 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2604

SELECT id, name

FROM products

WHERE price < 10 OR price > 100;