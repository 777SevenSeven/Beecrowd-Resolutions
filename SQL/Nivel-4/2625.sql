-- Beecrowd | 2625 - Máscara de CPF
-- Categoria: SQL | Nível 4 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2625

SELECT SUBSTRING(cpf, 1,3) || '.' ||

       SUBSTRING(cpf, 4,3) || '.' ||

       SUBSTRING(cpf, 7,3) || '-' ||

       SUBSTRING(cpf,10,2)

FROM natural_person

JOIN customers

    ON natural_person.id_customers = customers.id

