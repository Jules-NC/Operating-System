#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "gestionFichiers.h"

int main(int argc, char *argv[]){
	int file = open("test.txt", 'r');
	pid_t pid_fils = fork();
	char *c = litLigne(file);
	printf("%s", c);
}
