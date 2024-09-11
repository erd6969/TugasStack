#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxi 3

typedef int Disk;

typedef struct{
	int top;
	Disk angka[maxi];
} Stacks;

void initT1(Stacks *T1);
void initT2(Stacks *T2);
void initT3(Stacks *T3);
void pushTower(Stacks *T1, Disk temp);
void showTower(Stacks T1, Stacks T2, Stacks T3);
int isFullTower(Stacks T1);
int isEmptyTower(Stacks T1);
Disk popTower(Stacks *T1);
