-- Beecrowd | 2620 - Pedidos no Primeiro Semestre
-- Categoria: SQL | Nível 3 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2620

SELECT customers.name, orders.id

FROM customers

JOIN orders

    ON orders.id_customers = customers.id

WHERE EXTRACT(YEAR FROM orders.orders_date) = 2016 

AND EXTRACT(MONTH FROM orders.orders_date) <= 06;