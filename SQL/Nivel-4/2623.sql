-- Beecrowd | 2623 - Categorias com Vários Produtos
-- Categoria: SQL | Nível 4 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2623

SELECT products.name, categories.name

FROM products

JOIN categories

    ON products.id_categories = categories.id

WHERE products.amount > 100 AND categories.id IN (1,2,3,6,9)

ORDER BY categories.id ASC;