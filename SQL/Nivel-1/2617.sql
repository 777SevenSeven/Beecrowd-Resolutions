-- Beecrowd | 2617 - Fornecedor Ajax SA
-- Categoria: SQL | Nível 1 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2617

SELECT products.name, providers.name

FROM products

JOIN providers

    ON products.id_providers = providers.id

WHERE providers.name = 'Ajax SA';