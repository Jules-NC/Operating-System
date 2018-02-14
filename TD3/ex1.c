#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include "gestionFichiers.h"

int main(int argc, char **argv)
{
	int lolita[2];
	int source, destination;
	char *chaine;
	int i;
	pipe(lolita);
	pid_t forkID = fork();
	if(forkID > 0) //es el padre
	{
		source = open("Source.txt", O_RDONLY);
		while((chaine = litLigne(source)) != NULL)  ecritLigne(lolita[1], chaine);
		close(source);
	}
	else if(forkID == 0) //es el hijo
	{
		destination = open("Destination.txt", O_WRONLY|O_CREAT, S_IRWXU);
		while((chaine = litLigne(lolita[0])) != NULL)  ecritLigne(destination, chaine);
		close(destination);
	}
	else
		printf("PROBLEME DANS EL FORKE");
}
