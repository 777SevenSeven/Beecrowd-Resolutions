SELECT CONCAT('Approved: ', students.name) AS name, grade
FROM students
WHERE students.grade >= 7
ORDER BY students.grade DESC;