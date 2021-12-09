SELECT M.title FROM movies M  
JOIN stars S ON S.movie_id  = M.id 
JOIN people P ON P.id = S.person_id 
WHERE P.name = 'Johnny Depp'
INTERSECT
SELECT M.title FROM movies M  
JOIN stars S ON S.movie_id  = M.id 
JOIN people P ON P.id = S.person_id 
WHERE P.name = 'Helena Bonham Carter'
--Probar con la misma solicion buscando a johny deep en la speolic de __Helena bohan carter

-- Solucion de Git 
-- SELECT movies.title FROM people
-- JOIN stars ON people.id = stars.person_id
-- JOIN movies ON stars.movie_id = movies.id
-- WHERE people.name = "Johnny Depp" AND movies.title IN(
-- SELECT movies.title FROM people
-- JOIN stars ON people.id = stars.person_id
-- JOIN movies ON stars.movie_id = movies.id
-- WHERE people.name = "Helena Bonham Carter");

-- //other solution

-- SELECT movies.title FROM people
-- JOIN stars ON people.id = stars.person_id
-- JOIN movies ON stars.movie_id = movies.id
-- WHERE people.name = "Johnny Depp"
-- INTERSECT
-- SELECT movies.title FROM people
-- JOIN stars ON people.id = stars.person_id
-- JOIN movies ON stars.movie_id = movies.id
-- WHERE people.name = "Helena Bonham Carter";