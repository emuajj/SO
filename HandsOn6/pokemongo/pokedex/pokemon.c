#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "pokemon.h"

struct pokemon {
int id;
char *name;
char *type;
int total;
int hp;
int attack;
int defense;
int spAttack;
int spDefense;
int speed;
int generation;
int legendary;
};

/*Pokemon create_pokemon()
{
    FILE* f = fopen("./pokedex.csv", "w");
    Pokemon newP;
    
    printf("Enter pokemon id: ");
    scanf("%d", newP.pokemon_id);
    printf("Enter pokemon name: ");
    scanf("%s", newP.pokemon_name);
    printf("Enter pokemon height: ");
    scanf("%lf", newP.pokemon_height);
    printf("Enter pokemon weight: ");
    scanf("%d", newP.pokemon_weight);
    sprintf(f, newP.pokemon_id()),strlen(newP.pokemon_id());
    sprintf(f, ",");
    sprintf(f, newP.pokemon_name(),strlen(newP.pokemon_name()));
    sprintf(f, ",");
    sprintf(f, newP.pokemon_height(),strlen(newP.pokemon_height()));
    sprintf(f, ",");
    sprintf(f, newP.pokemon_weight(),strlen(newP.pokemon_weight()));
    sprintf(f, "\n");
}
*/
Pokemon new_pokemon(int id, char *name, int hp,int attack,int defense,int spAttack,int spDefense,int speed,int generation,int legendary)
{  
    Pokemon pokemon = malloc(sizeof(struct pokemon));
    pokemon->id = id;
    pokemon->name = name;
    pokemon->hp = hp;
    pokemon->attack = attack;
    pokemon->defense = defense;
    pokemon->spAttack = spAttack;
    pokemon->spDefense = spDefense;
    pokemon->speed = speed;
    pokemon->generation = generation;
    pokemon->legendary = legendary;

    return pokemon;
    
}

int pokemon_id(Pokemon pokemon)
{
    return pokemon->id;
}
char *pokemon_name(Pokemon pokemon)
{
    return pokemon->name;
}

int pokemon_hp(Pokemon pokemon)
{
    return pokemon->hp;
}
int pokemon_attack(Pokemon pokemon)
{
    return pokemon->attack;
}
int pokemon_defense(Pokemon pokemon)
{
    return pokemon->defense;
}
int pokemon_spAttack(Pokemon pokemon)
{
    return pokemon->spAttack;
}
int pokemon_spDefense(Pokemon pokemon)
{
    return pokemon->spDefense;
}
int pokemon_speed(Pokemon pokemon)
{
    return pokemon->speed;
}
int pokemon_generation(Pokemon pokemon)
{
    return pokemon->generation;
}
int pokemon_legenary(Pokemon pokemon)
{
    return pokemon->legendary;
}