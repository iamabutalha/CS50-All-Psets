SELECT avg(energy) FROM songs where artist_id= (SELECT id FROM artists where name = "Drake");
