main_v2: main_v2.c main_v2.c
	gcc main_v2.o pokedex.o -o main_v2
main_v2.o: main_v2.c
	gcc -c main_v2.c
pokedex.o: pokedex.c
	gcc -c pokedex.c
clean:
/bin/rm -rf *.o main_v2
execute:
	    ./main_v2
