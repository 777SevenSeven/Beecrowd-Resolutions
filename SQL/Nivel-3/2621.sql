-- Beecrowd | 2621 - Quantidades Entre 10 e 20
-- Categoria: SQL | Nível 3 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2621

SELECT products.name

FROM products

JOIN providers

    ON products.id_providers = providers.id

WHERE products.amount > 10 AND products.amount < 20 AND providers.name LIKE 'P%';