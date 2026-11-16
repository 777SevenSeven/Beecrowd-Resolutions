-- Beecrowd | 2745 - Taxas
-- Categoria: SQL | Nível 3 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2745

SELECT name, TO_CHAR(salary * 10 / 100, 'FM999999.00') AS tax

FROM people

WHERE salary > 3000