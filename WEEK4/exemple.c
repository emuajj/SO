#include <sys/types.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>

int random_bool()
    {
        srand(time(NULL));
        int i;
        i = (rand() % (1 - 0 + 1)) == 1;
        return i ;
    }



int main () 
{
    
    int pid = fork();
    int codret;
    
    
    if(pid == 0)
    {
        exit(37);
    }else{
        wait(&codret);
        printf("El valor que m'ha passat el fill: %d\n",WEXITSTATUS(codret));
    }
    exit(0);
}   