SELECT name FROM songs where artist_id= (SELECT id FROM artists where name = "Post Malone");
