SELECT DISTINCT p.name  FROM people p
JOIN stars s ON s.person_id = p.id
JOIN movies m ON m.id = s.movie_id
WHERE m.year = 2004 ORDER BY p.birth;

-- SELECT DISTINCT p.name, m.year
-- FROM people p
-- JOIN stars s ON s.person_id = p.id
-- JOIN movies m ON m.id = s.movie_id
-- WHERE m.year = 2004 ORDER BY m.year;

--18187 -- verificar en GIT. Hay una solcuion como la mía online??? subir
--resultadio correcto 18237

-- SELECT count(DISTINCT p.name) FROM people p JOIN stars s ON s.person_id = p.id JOIN movies m ON m.id = s.movie_id WHERE m.year = 2004;
-- -- --21468
-- SELECT p.name
-- FROM people p
--     JOIN stars s ON s.person_id = p.id
--     JOIN movies m ON m.id = s.movie_id
-- WHERE m.year = 2004
-- ;