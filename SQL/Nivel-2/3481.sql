-- Beecrowd | 3481 - Classificando uma Árvore
-- Categoria: SQL | Nível 2 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/3481

SELECT node_id,

    CASE

        WHEN node_id = 50 THEN 'ROOT'

        WHEN COUNT(pointer) = 0 THEN 'LEAF'

        ELSE 'INNER'

    END AS type

FROM nodes

GROUP BY node_id

ORDER BY node_id ASC;