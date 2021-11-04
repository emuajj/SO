//activitat 5 que no surt al campus
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
    srand(getpid());
    int i;
    i = rand() % 2;
    return  i;
}



int main () 
{   
    int d ;
    int fill,net;
    int pid = fork();
    
    
    if(pid == 0)
    {
        int a,c,b,d;
        int i;
        int pid2 = fork();
        i = random_bool();
    

        if(pid2 == 0)
        {
            i = random_bool();  
            exit(i);
        }else
        {
            wait (&a);
            b = WEXITSTATUS(a);
        }



        if(i == 0 && b == 0)
        {
            d = 0;
        }
        else if(i == 0 && b == 1)
        {
            d = 1;
        }
        else if(i == 1 && b == 0)
        {
            d = 2;
        }
        else if(i == 0 &&b == 1)
        {
            d = 3;
        }
        

        exit(d);

    }else
        wait (&d);
        int s = WEXITSTATUS(d);
        printf("Hola soc el pare ! Els resultats son:\n");
        if(s == 0)
        {
            printf("Fill  apunyalat i net  apunyalat\n");
        }
        else if(s == 1)
        {
            printf("Fill  apunyalat i net  decapitat\n");
        }
        else if(s == 2)
        {
            printf("Fill  decapitat i net  apunyalat\n");
        }
        else if(s == 3)
        {
            printf("Fill  apunyalat i net  apunyalat\n");
        }
    exit(0);
}