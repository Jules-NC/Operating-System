#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>

#include "gestionFichiers.h"
#include "procedures.h"

int main(int argc, char **argv){
	int file = open(argv[1], 'r');
	pid_t pid_fils = fork();
	if(pid_fils > 0)
	{
		wait(NULL);
	}
	char *c = litLigne(file);
	printEtTout(c);
	return 0;
}
