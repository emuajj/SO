#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "pokedex.h"
#include "pokemon.h"
#include <stddef.h>


Pokemon pokemons[10];

int init_pokedex()
{
    int i = 0;
    char* info;
    char* buf= malloc(100);
    FILE* f = fopen("./pokedex.csv","r");
    while(fgets(buf,100,f)!=NULL)
    {
        if((strlen(buf)>0) && (buf[strlen(buf)-1]== '\n'))
        
            buf[strlen (buf)-1] = "\0";
            info = strtok (buf),",";
            int id = atoi(info);
        

            info = strtok(buf,",");
            char *name = info;
            info = strtok(buf,",");
            double height  = atof(info);
            info = strtok(buf,",");
            double weight  = atof(info);
            Pokemon p = new_pokemon(id,name, height ,weight);
            pokemons[i] = p;
            i++;

    }
}

int add_pokemon(int id,char *name, double weight,double height)
{

    new_pokemon(id ,name, weight,height);

    return EXIT_SUCCESS;
}
 
int show_pokemon(int pos)
{
    Pokemon p = pokemons[pos];
    printf("Pokemon id %d \n name %s\n weight %lf\n height %lf\n",pokemon_id(p),name(p),weight(p) ,height(p));


return EXIT_SUCCESS;
}
 
int remove_pokemon(){
printf("[remove_pokemon]: @NOT IMPLEMENTED \n");
return EXIT_SUCCESS;
}
 

