
SELECT M.title , R.rating FROM movies M
JOIN ratings R ON R.movie_id = M.id
WHERE M.year = 2010 AND R.rating NOTNULL ORDER BY R.rating DESC, M.title ASC;

-- SELECT count(M.title) FROM movies M  JOIN ratings R ON R.movie_id = M.id WHERE M.year = 2010 ORDER BY R.rating DESC;

-- SELECT M.title, R.rating
-- FROM movies M
--     JOIN ratings R ON R.movie_id = M.id
-- WHERE M.year = 2010 AND R.rating NOTNULL
-- ORDER BY R.rating DESC
-- ;
--6864  .  ok! -corregido en ordenar alfabeticamente