-- Beecrowd | 2994 - Quanto Ganha um Médico?
-- Categoria: SQL | Nível 2 | Assunto: Seleção de Dados
-- Link: https://judge.beecrowd.com/pt/problems/view/2994

SELECT

    d.name,

    ROUND(

        SUM(

            a.hours * 150 * (1 + ws.bonus / 100.0)

        ),

        1

    ) AS salary

FROM doctors d

JOIN attendances a

    ON d.id = a.id_doctor

JOIN work_shifts ws

    ON a.id_work_shift = ws.id

GROUP BY d.id, d.name

ORDER BY salary DESC;