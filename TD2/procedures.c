#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

#include "procedures.h"

void printEtProcess(char* chaine){
	int pid = getpid();
	printf("PID:%d, %s", pid, chaine);
}

void printEtPere(char* chaine){
	int ppid = getppid();
	printf("PPID:%d, %s", ppid, chaine);
}

void printEtTout(char* chaine){
	int ppid = getppid();
	int pid = getpid();
	printf("PPID:%d, PID:%d, %s",ppid, pid, chaine);
}
