SELECT M.title FROM movies M  JOIN ratings R ON R.movie_id = M.id  JOIN stars S ON S.movie_id = M.id JOIN people P ON P.id = S.person_id  WHERE P.name = 'Chadwick Boseman'  ORDER BY R.rating DESC LIMIT 0,5;


-- verificar en git los titulos --> ok!
-- 42|7.5
-- Black Panther|7.3
-- Marshall|7.2
-- Get on Up|6.9
-- Draft Day|6.8

-- SELECT M.title 
-- FROM movies M 
-- JOIN ratings R ON R.movie_id = M.id 
-- JOIN stars S ON S.movie_id = M.id
-- JOIN people P ON P.id = S.person_id 
-- WHERE P.name = 'Chadwick Boseman' 
-- ORDER BY R.rating
-- LIMIT 0,5