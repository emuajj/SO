#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "pokedex.h"
#include "pokemon.h"
#include <string.h>
#define MAX_POKEMON 10

Pokemon pokemons[MAX_POKEMON];

char*info;
int init_pokedex(){
int i = 0;
char* buf = malloc(100);
FILE* f = fopen("./pokedex/pokedex.csv", "r");
while (fgets(buf, 100, f) != NULL) {
    if ((strlen(buf)>0) && (buf[strlen (buf) - 1] == '\n'))
        buf[strlen (buf) - 1] = '\0';
    
    info = strtok(buf, ",");
    int id = atoi(info);
    //printf("%d ", id);
    info = strtok(NULL, ",");
    char *name = info;
    //printf("%s ", name);
    info = strtok(NULL, ",");
    int hp = atoi(info);
    //printf("%d ", hp);
    info = strtok(NULL, ",");
    int attack = atoi(info);
    //printf("%d ", attack);
    info = strtok(NULL, ",");
    int defense = atoi(info);
    //printf("%d ", defense);
    info = strtok(NULL, ",");
    int spAttack = atoi(info);
    //printf("%d ", spAttack);
    info = strtok(NULL, ",");
    int spDefense = atoi(info);
    //printf("%d ", spDefense);
    info = strtok(NULL, ",");
    int speed = atoi(info);
    //printf("%d ", speed);
    info = strtok(NULL, ",");
    int generation = atoi(info);
    //printf("%d ", generation);
    info = strtok(NULL, ",");
    int legendary = atoi(info);
    //printf("%d ", legendary);
    info = strtok(NULL, ",");

    Pokemon p = new_pokemon(id,name,hp,attack,defense,spAttack,spDefense,speed,generation,legendary );
    pokemons[i] = p;
    i++;

}


return EXIT_SUCCESS;
}


int show_pokemon(int pos){
    Pokemon p = pokemons[pos];
    printf("@@@@@@@@@@@@@@\n");
    printf("id: %d |", pokemon_id(p));
    printf("name: %s \n", pokemon_name(p));
    printf("hp: %d |", pokemon_hp(p));
    printf("attack: %d |", pokemon_attack(p));
    printf("defense: %d \n", pokemon_defense(p));
    printf("spAttack: %d |", pokemon_spAttack(p));
    printf("spDefense: %d \n", pokemon_spDefense(p));
    printf("speed: %d \n", pokemon_speed(p));
    printf("Generation: %d \n", pokemon_generation(p));
    //printf("Legendary: %d \n", pokemon_legendary(p));
    printf("@@@@@@@@@@@@@@\n");


return EXIT_SUCCESS;
}
