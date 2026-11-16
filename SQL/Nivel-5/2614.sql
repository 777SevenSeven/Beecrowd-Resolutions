-- Beecrowd | 2614 - Locações de Setembro
-- Categoria: SQL | Nível 5 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2614

SELECT customers.name, rentals.rentals_date

FROM customers

JOIN rentals

    ON rentals.id_customers = customers.id

WHERE TO_CHAR(rentals.rentals_date, 'MM') = '09';