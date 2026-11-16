-- Beecrowd | 2619 - Super Luxo
-- Categoria: SQL | Nível 2 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2619

SELECT products.name, providers.name, products.price

FROM products

JOIN providers

    ON products.id_providers = providers.id

JOIN categories

    ON products.id_categories = categories.id

WHERE products.price > 1000 AND categories.name = 'Super Luxury';

