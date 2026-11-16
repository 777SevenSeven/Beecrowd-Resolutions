SELECT customers.name, orders.id
FROM customers
JOIN orders
    ON orders.id_customers = customers.id
WHERE EXTRACT(YEAR FROM orders.orders_date) = 2016 
AND EXTRACT(MONTH FROM orders.orders_date) <= 06;