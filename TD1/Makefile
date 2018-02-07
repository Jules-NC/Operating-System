gestionFichiers.o: gestionFichiers.c
	gcc -c gestionFichiers.c

test1.o: test1.c gestionFichiers.h
	gcc -c test1.c

Test1: test1.o gestionFichiers.o
	gcc test1.o gestionFichiers.o -o Test1
