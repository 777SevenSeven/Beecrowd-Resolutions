-- Beecrowd | 2739 - Dia de Pagamento
-- Categoria: SQL | Nível 6 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2739

SELECT loan.name, CAST(EXTRACT(DAY FROM loan.payday) AS INTEGER) AS day

FROM loan;