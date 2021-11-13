#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <errno.h>
#include "pokedex/pokedex.h"

 
#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"
 
char *args[] = {"pokemon", "pokemon", NULL};

int getRandom()
{
    return rand()%152;
}

int main(int arc, char *arv[])
{
init_pokedex(); 
   
int endFlag=1;
 
while (endFlag == 1) 
{
 
    char s[100];
    char choice;
    int status;
    sprintf(s, "################\n# E. Explore \n# Q. Quit\n################\n");
    if (write(1, s, strlen(s)) < 0) perror("Error writting the menu");
    scanf(" %c", &choice);
 

    switch (choice) 
    {
        case 'Q':
        endFlag=0;
        break;


        case 'E':
        printf("%sAsh:[%d]--->Wild pokemon has appeared%s\n",KBLU,getpid(),KNRM);
        printf("%s",KCYN);
        srand(getpid());
        show_pokemon(getRandom());
        printf("%s",KNRM);
        int fill = fork();
        if( fill == 0)
        {
            execv("./pokemon", args); 
        }
        else if ( fill > 0 )
        {
            char choice2;
            int bucle = 0;
            while(bucle == 0)
            {
                printf("################\n P: Throw Pokeball, B:Throw Berry, R:Run \n################\n");
                scanf(" %c",&choice2);
                printf("%c",choice2);
                switch (choice2)
                {
                    case 'P':
                    kill(fill,SIGUSR1);
                    break;
                    /*case 'B':
                    break;*/
                    case 'R':
                    kill(fill,SIGINT);
                    bucle++;
                    break;

                    default:
                    perror("!!!!Invalid option. Try again.\n");
                    scanf("%c",&choice2);

                }
                waitpid(fill,&status,WUNTRACED);
                if(WEXITSTATUS(status) == 7)
                {
                    bucle++;
                    sprintf(s, "%s!!!!Pokemon escaped! %s\n", KYEL, KNRM);
                    printf("%s",s);
                }
                else if(WEXITSTATUS(status) == 2)
                {
                    bucle++;
                    printf("Pokemon has been captured!\n"); 
                }
                else{
                    kill(fill, SIGCONT);
                }

            }
        }
        //wait(NULL);       
        break;

        default:
        sprintf(s, "%s!!!!Invalid option. Try again. %s\n", KRED, KNRM);
        if (write(1, s, strlen(s)) < 0) perror("Error writting invalid option");
    }
}
 
char s[100];
sprintf(s, "%s!!!!I'm tired from all the fun... %s\n", KMAG, KNRM);
if (write(1, s, strlen(s)) < 0) perror("Error writting the ending msg");
exit(0);
 
}