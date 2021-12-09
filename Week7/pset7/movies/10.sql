SELECT DISTINCT P.name FROM  people P JOIN directors D ON D.person_id = P.id JOIN movies M ON M.id = D.movie_id JOIN ratings R ON R.movie_id = M.id WHERE R.rating >= 9.0;


-- SELECT count(DISTINCT P.name) FROM  people P JOIN directors D ON D.person_id = P.id JOIN movies M ON M.id = D.movie_id JOIN ratings R ON R.movie_id = M.id WHERE R.rating > 9.0;
-- --1882 -- verificar en GIT
-- SELECT P.name
-- FROM  people P
-- JOIN directors D ON D.person_id = P.id
-- JOIN movies M ON M.id = D.movie_id
-- JOIN ratings R ON R.movie_id = M.id
-- WHERE R.rating >= 9

-- desde git:
-- select name from people
-- join directors on directors.person_id=people.id
-- join movies on directors.movie_id=movies.id
-- join ratings on ratings.movie_id=movies.id
-- where ratings.rating >= 9;