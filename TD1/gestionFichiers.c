#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "gestionFichiers.h"

#define TAILLEBUF 100
char* litDixCaracteres(int descripteur){
	char* res = malloc(11*sizeof(char));
	read(descripteur, res, 11);
	res[10] = '\0';
	return res;
}

char* litLigne(int descripteur){
	char* texte = malloc(TAILLEBUF*sizeof(char));
	int i = 0;

	while(i<TAILLEBUF){
		read(descripteur, texte+i, 1);
		if(texte[i] == '\n'){
			texte[i] = '\0';
			return texte;
		}
		i++;
	}
	return NULL;
}
