SELECT candidate.name, 
ROUND((
((score.math * 2) + 
(score.specific * 3) + 
(project_plan * 5)) / 10
)::numeric, 2) AS Avg
FROM candidate
JOIN score
    ON score.candidate_id = candidate.id
ORDER BY Avg DESC;

