#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <libgen.h>
#include <errno.h>
#include <string.h>
#include <getopt.h>
#include <sys/types.h>
#include "pokemon.h"
 

int main(int argc, char *argv[]) 
{
    /*
    Pokemon p = malloc(sizeof(struct pokemon));
    
    p->pokemon_id=01;
    p->name = "charmander";
    p->weight = 33;
    p->height = 22;
    */
   Pokemon p= new_pokemon(atoi(argv[1]),argv[2], atof(argv[3]),atof(argv[4]));


    init_pokedex();
    show_pokemon(2);
    
    


    
}
