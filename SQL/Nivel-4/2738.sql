-- Beecrowd | 2738 - Concurso
-- Categoria: SQL | Nível 4 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2738

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



