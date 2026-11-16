-- Beecrowd | 2742 - O Multiverso de Richard
-- Categoria: SQL | Nível 5 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2742

SELECT 

    life_registry.name,

    ROUND(life_registry.omega * 1.618, 3) AS "Fator N"

FROM life_registry

JOIN dimensions

    ON dimensions.id = life_registry.dimensions_id

WHERE life_registry.name LIKE 'Richard%'

  AND dimensions.name IN ('C774', 'C875')

ORDER BY life_registry.omega;