CC=gcc
CFLAGS=-c
SOURCES = pokemongo pokemon

all: $(SOURCES) 

pokedex/pokemon.o: pokedex/pokemon.c
	gcc -c pokedex/pokemon.c -o pokedex/pokemon.o

pokedex/pokedex.o: pokedex/pokedex.c 
	gcc -c pokedex/pokedex.c -o pokedex/pokedex.o

pokemon: 
	gcc pokemon.c -o pokemon

pokemongo: pokedex/pokedex.o pokedex/pokemon.o pokemongo.c
	gcc pokedex/pokedex.o pokedex/pokemon.o pokemongo.c -o pokemongo 	

clean:
	rm -r $(SOURCES)
	rm -r ./pokedex/*.o
	