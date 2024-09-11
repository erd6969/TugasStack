#include "header.h"

void initT1(Stacks *T1){
	(*T1).top = -1;
	pushTower(&(*T1), 3);
	pushTower(&(*T1), 2);
	pushTower(&(*T1), 1);
}

void initT2(Stacks *T2){
	(*T2).top = -1;
	(*T2).angka[0] = 0;
	(*T2).angka[1] = 0;
	(*T2).angka[2] = 0;
}

void initT3(Stacks *T3){
	(*T3).top = -1;
	(*T3).angka[0] = 0;
	(*T3).angka[1] = 0;
	(*T3).angka[2] = 0;
}

void pushTower(Stacks *T1, Disk temp){
	(*T1).top++;
	(*T1).angka[(*T1).top] = temp;
}

void showTower(Stacks T1, Stacks T2, Stacks T3){
	
	printf("| a |	| b |	| c |");
	printf("\n\n| %d |	| %d |	| %d |", T1.angka[2], T2.angka[2], T3.angka[2]);
	printf("\n| %d |	| %d |	| %d |", T1.angka[1], T2.angka[1], T3.angka[1]);
	printf("\n| %d |	| %d |	| %d |", T1.angka[0], T2.angka[0], T3.angka[0]);
}

int isFullTower(Stacks T1){
	return T1.top == maxi - 1;
}

int isEmptyTower(Stacks T1){
	return T1.top == -1;
}

Disk popTower(Stacks *T1){
	Disk temp;
	
	temp = (*T1).angka[(*T1).top];
	(*T1).angka[(*T1).top] = 0;
	(*T1).top--;
	return temp;
}
