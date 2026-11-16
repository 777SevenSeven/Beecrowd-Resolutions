-- Beecrowd | 2605 - Representantes Executivos
-- Categoria: SQL | Nível 4 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2605

SELECT products.name, providers.name

FROM products

JOIN providers

    ON products.id_providers = providers.id

JOIN categories

    ON products.id_categories = categories.id

WHERE categories.id = 6;