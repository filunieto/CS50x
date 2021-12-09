SELECT avg(energy) FROM songs WHERE artist_id =(SELECT id FROM artists WHERE name = "Drake");

-- SELECT name FROM songs WHERE artist_id=(SELECT id FROM name = "Drake")

-- SELECT id FROM artists WHERE name = "Drake";
-- 0.449

-- esta de abajo correcta
-- sqlite> SELECT avg(energy) FROM songs WHERE artist_id =(SELECT id FROM artists WHERE name = "Drake");
-- avg(energy)
-- 0.599