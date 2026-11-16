SELECT
    A.queue,
    A.id AS left,
    B.id AS right
FROM chairs A
JOIN chairs B
    ON A.queue = B.queue
    AND B.id = A.id + 1
WHERE A.available = TRUE
  AND B.available = TRUE
ORDER BY A.id;