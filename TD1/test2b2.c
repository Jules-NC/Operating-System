#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "gestionFichiers.h"

int main(int argc, char* argv[]){
	int id = open(argv[1], 'r');
	
	char* res = litLigne(id);
	printf(res);
	
	return 0;
}
