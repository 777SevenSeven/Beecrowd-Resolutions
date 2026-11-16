-- Beecrowd | 2622 - Pessoas Jurídicas
-- Categoria: SQL | Nível 1 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2622

SELECT customers.name

FROM customers

JOIN legal_person

    ON customers.id = legal_person.id_customers;

