#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "gestionFichiers.h"

int main(int argc, char* argv[]){
	int id = open("fichierTest.txt", 'r');
	char* res = litDixCaracteres(id);
	printf(res);
	printf('\n');
	
	char* res2 = litLigne(id);
	printf(res2);
	
	return 0;
}
