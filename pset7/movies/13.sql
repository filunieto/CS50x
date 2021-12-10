SELECT DISTINCT P.name FROM people P JOIN stars S ON S.person_id = P.id JOIN movies M ON M.id = S.movie_id WHERE M.id IN (SELECT M.id FROM movies M  JOIN stars S ON S.movie_id = M.id JOIN people P ON P.id = S.person_id WHERE P.name = 'Kevin Bacon' AND P.birth = 1958) AND P.name != 'Kevin Bacon';


-- 177 -- como quitar en nombre de kevin bacon de la lista? --> quitado al final !

-- SELECT P.name 
-- FROM people P 
-- JOIN stars S ON S.person_id = P.id
-- JOIN movies M ON M.id = S.movie_id 
-- WHERE P.name = 'Kevin Bacon'; 

-- SELECT count(DISTINCT P.name) FROM people P JOIN stars S ON S.person_id = P.id JOIN movies M ON M.id = S.movie_id WHERE M.id IN (SELECT M.id FROM movies M  JOIN stars S ON S.movie_id = M.id JOIN people P ON P.id = S.person_id WHERE P.name = 'Kevin Bacon' AND P.birth = 1958);


-- SELECT M.id FROM movies M  JOIN stars S ON S.movie_id = M.id JOIN people P ON P.id = S.person_id WHERE P.name = 'Kevin Bacon' AND P.birth = 1958;

