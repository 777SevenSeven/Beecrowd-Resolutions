-- Beecrowd | 2609 - Produtos por Categorias
-- Categoria: SQL | Nível 6 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2609

SELECT 

       categories.name AS name,

       SUM(products.amount) AS sum

FROM products

JOIN categories

    ON products.id_categories = categories.id

GROUP BY categories.name;