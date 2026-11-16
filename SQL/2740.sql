SELECT name
FROM (
    SELECT 'Podium: ' || team AS name, 1 AS ordem, position
    FROM league
    WHERE position <= 3

    UNION ALL

    SELECT 'Demoted: ' || team AS name, 2 AS ordem, position
    FROM league
    WHERE position >= (
        SELECT MAX(position) - 1
        FROM league
    )
) AS resultado
ORDER BY ordem, position;