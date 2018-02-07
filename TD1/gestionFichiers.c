#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "gestionFichiers.h"

const int TAILLEBUF = 10;
char* litDixCaracteres(int descripteur){
	char* res = malloc(11*sizeof(char));
	read(descripteur, res, 11);
	res[10] = '\0';
	return res;
}

char* litLigne(int descripteur){
	char* texte = malloc(TAILLEBUF*sizeof(char));
	char* buffer = malloc(TAILLEBUF*sizeof(char));
	int i = 0;

	read(descripteur, texte, TAILLEBUF);
	while(texte[i] != '\n' || i<TAILLEBUF){
		buffer[i] = texte[i]
		i++;
	}
	buffer[i] = '\0';
	
	return buffer;
}
