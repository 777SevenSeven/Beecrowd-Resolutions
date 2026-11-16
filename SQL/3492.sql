WITH cidades_ranking AS (
    SELECT
        c.nome_cidade,
        c.regiao,
        COUNT(DISTINCT p.ponto_id) AS qtd_pontos,
        AVG(a.nota) AS media_avaliacoes
    FROM Cidades c
    JOIN PontosTuristicos p
        ON p.cidade_id = c.cidade_id
    JOIN Avaliacoes a
        ON a.ponto_id = p.ponto_id
    GROUP BY
        c.cidade_id,
        c.nome_cidade,
        c.regiao
    HAVING COUNT(DISTINCT p.ponto_id) >= 2
)

SELECT
    nome_cidade,
    regiao,
    qtd_pontos,
    ROUND(media_avaliacoes, 2) AS media_avaliacoes,
    RANK() OVER (
        PARTITION BY regiao
        ORDER BY media_avaliacoes DESC
    ) AS ranking_regional
FROM cidades_ranking
ORDER BY
    regiao,
    ranking_regional;