procedures.o:	procedures.c procedures.h
	gcc -c procedures.c

testIB1.o:	procedures.h testIB1.c
	gcc -c testIB1.c

TestIB1.out:	procedures.o testIB1.o
	gcc procedures.o testIB1.o -o TestIB1.out

testIB2.o:	procedures.h testIB2.c
	gcc -c testIB2.c

TestIB2.out:	procedures.o testIB2.o
	gcc procedures.o testIB2.o -o TestIB2.out

testIB3.o:	procedures.h testIB3.c
	gcc -c testIB3.c

TestIB3.out:	procedures.o testIB3.o
	gcc procedures.o testIB3.o -o TestIB3.out

sourceC.o:	procedures.h sourceC.c
	gcc -c sourceC.c

SourceC.out:	procedures.o sourceC.o
	gcc procedures.o sourceC.o -o SourceC.out

testIII1.o:	gestionFichiers.h testIII1.c
	gcc -c testIII1.c

gestionFichiers.o: gestionFichiers.h gestionFichiers.c
	gcc -c gestionFichiers.c

TestIII1.out:	gestionFichiers.o testIII1.o
	gcc gestionFichiers.o testIII1.o -o TestIII1.out

testIII2.o:	gestionFichiers.h testIII2.c
	gcc -c testIII2.c

TestIII2.out:	gestionFichiers.o testIII2.o
	gcc gestionFichiers.o testIII2.o -o TestIII2.out

testIII3.o:	gestionFichiers.h procedures.h testIII3.c
	gcc -c testIII3.c

TestIII3.out:	gestionFichiers.o procedures.o testIII3.o
	gcc gestionFichiers.o testIII3.o procedures.o -o TestIII3.out
