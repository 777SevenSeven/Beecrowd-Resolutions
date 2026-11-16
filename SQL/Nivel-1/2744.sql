-- Beecrowd | 2744 - Senhas
-- Categoria: SQL | Nível 1 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2744

SELECT id, password, MD5(password) AS MD5

FROM account;

