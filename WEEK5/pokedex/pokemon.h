


//Pokemon *p;

typedef struct pokemon *Pokemon;

Pokemon create_pokemon();

Pokemon new_pokemon(int id, char *name, int hp,int attack,int defense,int spAttack,int spDefense,int speed,int generation,int legendary);
int pokemon_id(Pokemon pokemon);
char *pokemon_name(Pokemon pokemon);
//int pokemon_total(Pokemon pokemon);
int pokemon_hp(Pokemon pokemon);
int pokemon_attack(Pokemon pokemon);
int pokemon_defense(Pokemon pokemon);
int pokemon_spAttack(Pokemon pokemon);
int pokemon_spDefense(Pokemon pokemon);
int pokemon_speed(Pokemon pokemon);
int pokemon_generation(Pokemon pokemon);
int pokemon_legendary(Pokemon pokemon);