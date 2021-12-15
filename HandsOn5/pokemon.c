#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define RUNNINGDIR "./" 
#define LOGFILE RUNNINGDIR "log.txt"

enum accions {pokemonEscaped = 7,pokemonCaptured = 2, AshEscaped=0};
char msg[100];


void logger(char* missatge)
{
    time_t now;
    time(&now);
    FILE* f = fopen(LOGFILE,"a");
    fprintf(f , "%s:%s\n",ctime(&now) ,missatge);
    fclose(f);
} 



int getRandom()
{
    return rand()%10;
}

void tractament()
{
    
   
    int num = getRandom();

    if(num == pokemonEscaped)//casos de if
    {
        sprintf(msg,"S'ha generat el numero %d i per tant fem exit(%d)\n", num, pokemonEscaped);
        logger(msg);
        exit(pokemonEscaped);
        
    }
    if(num == pokemonCaptured)
    {
        sprintf(msg,"S'ha generat el numero %d i per tant fem exit(%d)\n", num, pokemonCaptured);
        logger(msg);
        exit(pokemonCaptured); 
    }
    else
    {
        sprintf(msg,"S'ha generat el numero %d i per tant ens enviem un SIGSTOP -> envia un SIGCHLD al pare\n", num);
        logger(msg);
        kill(getpid(),SIGSTOP);//fill debloquetja el pare SIGCHLD
    }
    
}

void acabar_process(){
    sprintf(msg,"El proces pokemon [%d] i acabarem amb un exit(%d)\n", getpid(), AshEscaped);
    logger(msg);
    exit(AshEscaped);
}


int main()
{
    int num;
    signal(SIGUSR1,tractament);
    signal(SIGINT,acabar_process);
    srand(getpid());
    while(1)
    {     
    }

    
}