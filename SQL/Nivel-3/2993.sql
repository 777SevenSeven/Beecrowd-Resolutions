-- Beecrowd | 2993 - Mais Frequente
-- Categoria: SQL | Nível 3 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2993

SELECT amount AS most_frequent_value

FROM value_table

GROUP BY amount

ORDER BY COUNT(*) DESC 

LIMIT 1;