WITH resultados AS (
    SELECT
        team_1 AS team_id,
        CASE
            WHEN team_1_goals > team_2_goals THEN 1
            ELSE 0
        END AS vitoria,
        CASE
            WHEN team_1_goals < team_2_goals THEN 1
            ELSE 0
        END AS derrota,
        CASE
            WHEN team_1_goals = team_2_goals THEN 1
            ELSE 0
        END AS empate
    FROM matches

    UNION ALL

    SELECT
        team_2 AS team_id,
        CASE
            WHEN team_2_goals > team_1_goals THEN 1
            ELSE 0
        END AS vitoria,
        CASE
            WHEN team_2_goals < team_1_goals THEN 1
            ELSE 0
        END AS derrota,
        CASE
            WHEN team_2_goals = team_1_goals THEN 1
            ELSE 0
        END AS empate
    FROM matches
)

SELECT
    t.name,
    COUNT(r.team_id) AS matches,
    SUM(r.vitoria) AS victories,
    SUM(r.derrota) AS defeats,
    SUM(r.empate) AS draws,
    SUM(r.vitoria * 3 + r.empate) AS score
FROM teams t
JOIN resultados r
    ON t.id = r.team_id
GROUP BY t.id, t.name
ORDER BY score DESC, t.name;