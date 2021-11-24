#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    execvp(argv[1],&argv[1]);
}

//chown root root misudo
//chmod u+s misudo

//whoami