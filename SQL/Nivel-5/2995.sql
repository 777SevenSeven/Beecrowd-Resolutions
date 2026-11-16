-- Beecrowd | 2995 - A Mensagem do Sensor
-- Categoria: SQL | Nível 5 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2995

SELECT temperature, COUNT(*) AS number_of_records

FROM records

GROUP BY mark, temperature

ORDER BY mark;

