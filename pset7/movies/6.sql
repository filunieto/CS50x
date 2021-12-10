SELECT avg(R.rating) FROM ratings R
JOIN "movies" M on R.movie_id = M.id
WHERE M.year = 2012;

--SELECT avg(rating) FROM ratings WHERE movie_id =(SELECT id FROM movies WHERE year = 2012);

--6.25052023121385 parece ok! --probamos con redondeo