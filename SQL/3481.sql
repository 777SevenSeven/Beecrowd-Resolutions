SELECT node_id,
    CASE
        WHEN node_id = 50 THEN 'ROOT'
        WHEN COUNT(pointer) = 0 THEN 'LEAF'
        ELSE 'INNER'
    END AS type
FROM nodes
GROUP BY node_id
ORDER BY node_id ASC;