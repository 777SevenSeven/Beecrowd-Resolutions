SELECT
    e.cpf,
    e.enome,
    d.dnome
FROM empregados e
JOIN departamentos d
    ON e.dnumero = d.dnumero
WHERE NOT EXISTS (
    SELECT 1
    FROM trabalha t
    WHERE t.cpf_emp = e.cpf
)
ORDER BY e.cpf;