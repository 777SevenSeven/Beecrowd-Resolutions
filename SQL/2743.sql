SELECT name, CHARACTER_LENGTH(people.name) AS length
FROM people
ORDER BY length DESC
