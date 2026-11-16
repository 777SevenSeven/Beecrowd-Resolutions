-- Beecrowd | 2741 - Notas dos Alunos
-- Categoria: SQL | Nível 5 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2741

SELECT CONCAT('Approved: ', students.name) AS name, grade

FROM students

WHERE students.grade >= 7

ORDER BY students.grade DESC;