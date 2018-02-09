#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "procedures.h"

int main(int argc, char *argv[]){
	pid_t forkID = fork();
	if(forkID > 0)
	{
		printEtTout("Je suis le pere");
	}
	else if(forkID == 0)
	{
		execv("TestIB1.out", NULL);
	}
	else
	{
		printf("Erreur dans fork");
	}
}
