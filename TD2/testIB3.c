#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

#include "procedures.h"

int main(int argc, char *argv[]){
	pid_t forkID = fork();
	if(forkID == 0)
	{
		printEtTout("Fils\n");
	}
	else
	{
		wait(forkID);
		printEtTout("Pere\n");
	}
	return 0;
}
