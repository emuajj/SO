


//Pokemon *p;

typedef struct pokemon *Pokemon;

Pokemon create_pokemon();

Pokemon new_pokemon(int id, char *name, int hp,int attack,int defense,int spAttack,int spDefense,int speed,int generation,int legendary);
int pokemon_id(Pokemon pokemon);
char *pokemon_name(Pokemon pokemon);
double pokemon_height(Pokemon pokemon);
double pokemon_weight(Pokemon pokemon);
