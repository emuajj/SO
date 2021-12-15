#include <stdlib.h>

#include <stdio.h>

#include <signal.h>

#include <string.h>

#include <unistd.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <errno.h>

    

int main(int argc, char *argv[])

{

    int fd[2];

    char s[100];

    char *p1[] = {"ls", NULL};

    char *p2[] = {"wc", "-l", NULL};

    

    if (pipe(fd)<0)

    {

        perror("Error de creació del pipe fd[]");

        exit(-1);

    }

    int pid;
    int pid2;

    switch (pid = fork()){

    case -1:
        perror("Error fork()");
        exit(-2);
        break;

    case 0:
        close(fd[0]);
        close(1);
        dup(fd[1]); 
        close(fd[0]);
        close(fd[1]);
        execvp(p1[0], p1);
        

    default:  

        pid2 = fork();
        if(pid2 == 0)
        {
            close(fd[1]);
            //close(0);
            //dup(fd[0]);
            // Aquestes dos línies son equivalents a
            dup2(fd[0],0);
            close(fd[0]);
            close(fd[1]);
            execvp(p2[0], p2);
        }
        close(fd[1]);
        waitpid(pid,0,0);
        waitpid(pid2,0,0);
    
    }

    
    return 0;
}