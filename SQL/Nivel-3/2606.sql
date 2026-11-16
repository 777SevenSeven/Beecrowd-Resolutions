-- Beecrowd | 2606 - Categorias
-- Categoria: SQL | Nível 3 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2606

SELECT products.id, products.name

FROM products

JOIN categories

ON products.id_categories = categories.id

WHERE categories.name LIKE 'super%';