-- Beecrowd | 2610 - Valor Médio dos Produtos
-- Categoria: SQL | Nível 3 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2610

SELECT ROUND(AVG(products.price),2) AS price

FROM products;

