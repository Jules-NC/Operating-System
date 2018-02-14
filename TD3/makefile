gestionFichiers.o:	gestionFichiers.h gestionFichiers.c
	gcc -c gestionFichiers.c

ex1.o:	ex1.c gestionFichiers.h
	gcc -c ex1.c

ex1.out:	ex1.o gestionFichiers.o
	gcc gestionFichiers.o ex1.o -o ex1.out
