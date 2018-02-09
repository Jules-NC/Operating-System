#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "gestionFichiers.h"

int main(int argc, char *argv[]){
	pid_t pid_fils = fork();
	int file = open("test.txt", 'r');
	char *c = litLigne(file);
	printf("%s", c);
}
