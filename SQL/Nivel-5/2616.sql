-- Beecrowd | 2616 - Nenhuma Locação
-- Categoria: SQL | Nível 5 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2616

SELECT customers.id, customers.name

FROM customers

LEFT JOIN locations

ON customers.id = locations.id_customers

WHERE locations.locations_date IS NULL

ORDER BY customers.id;