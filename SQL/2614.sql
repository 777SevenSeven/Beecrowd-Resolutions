SELECT customers.name, rentals.rentals_date
FROM customers
JOIN rentals
    ON rentals.id_customers = customers.id
WHERE TO_CHAR(rentals.rentals_date, 'MM') = '09';