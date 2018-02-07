gestionFichiers.o: gestionFichiers.c
	gcc -c gestionFichiers.c

test1.o: test1.c gestionFichiers.h
	gcc -c test1.c

Test1.out: test1.o gestionFichiers.o
	gcc test1.o gestionFichiers.o -o Test1

test2b1.o: test2b1.c gestionFichiers.h
	gcc -c test2b1.c

Test2b1.out: test2b1.o gestionFichiers.o
	gcc test2b1.o gestionFichiers.o -o Test2b1

test2b2.o: test2b2.c gestionFichiers.h
	gcc -c test2b2.c

Test2b2.out: test2b2.o gestionFichiers.o
	gcc test2b2.o gestionFichiers.o -o Test2b2
