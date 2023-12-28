create table if not exists genres 
(id SERIAL primary KEY,
name VARCHAR(60) NOT NULL
);

create table if not exists artists 
(id SERIAL primary key,
name VARCHAR(60) NOT NULL
);

CREATE TABLE IF NOT EXISTS genres_artists( 
genres_id INT REFERENCES genres(id),
artists_id INT REFERENCES artists(id),
CONSTRAINT genres_artists_pk PRIMARY KEY (genres_id, artists_id)
);

create table if not exists albums 
(id SERIAL primary KEY,
name VARCHAR(60) NOT NULL,
date DATE NOT NULL
);

CREATE TABLE IF NOT EXISTS artists_albums(
artists_id INT REFERENCES artists(id),
albums_id INT REFERENCES albums(id),
CONSTRAINT artists_albums_pk PRIMARY KEY (artists_id, albums_id)
);

CREATE TABLE IF NOT EXISTS collection
(
id SERIAL PRIMARY KEY,
name varchar(50) NOT NULL, 
date DATE NOT NULL
);

create table if not exists tracks 
(
id SERIAL primary KEY,
name VARCHAR(60) NOT NULL,
duration INT NOT NULL,
fk_albums INT REFERENCES albums(id)
);

CREATE TABLE IF NOT EXISTS collection_tracks(
collection_id INT REFERENCES collection(id),
tracks_id INT REFERENCES tracks(id),
CONSTRAINT collection_tracks_pk PRIMARY KEY (collection_id, tracks_id)
);