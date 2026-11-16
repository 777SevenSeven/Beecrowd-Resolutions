SELECT name, TO_CHAR(salary * 10 / 100, 'FM999999.00') AS tax
FROM people
WHERE salary > 3000