typedef struct
#include<string.h>   
#include<stdio.h>
#include<unistd.h>
#include <stddef.h>
#include "pokemon.h"

struct pokemon
{
    int pokemon_id;
    char *name;
    double height;
    double weight;
};

Pokemon new_pokemon(int pokemon_id,char *name,double height,double weight)
{
    Pokemon pokemon = malloc(sizeof(struct pokemon));
    pokemon->pokemon_id = pokemon_id;
    pokemon->name = name;
    pokemon->height = height;
    pokemon->weight = weight;
    return pokemon;
}
int pokemon_id (Pokemon pokemon)
{
    return pokemon->pokemon_id;
}
char *pokemon_name(Pokemon pokemon)
{
    return pokemon->name;
}
double  height(Pokemon pokemon)
{
    return pokemon->height;
}
double weight(Pokemon pokemon)
{
    return pokemon->weight;
}
