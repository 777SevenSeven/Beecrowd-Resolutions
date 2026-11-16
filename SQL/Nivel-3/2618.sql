-- Beecrowd | 2618 - Produtos Importados
-- Categoria: SQL | Nível 3 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2618

SELECT products.name, providers.name, categories.name

FROM products

JOIN providers

    ON products.id_providers = providers.id

JOIN categories

    ON products.id_categories = categories.id

WHERE providers.name = 'Sansul SA' AND categories.name = 'Imported';