SELECT P.name FROM movies M JOIN stars S ON S.movie_id  = M.id  JOIN people P ON P.id = S.person_id WHERE M.title = "Toy Story";

-- Tom Hanks
-- Tim Allen
-- Don Rickles
-- Jim Varney
--ok!