#include "header.h"

int main(int argc, char *argv[]) {
	Stacks T1;
	Stacks T2;
	Stacks T3;
	Disk angka;
	Disk tempo ;
	char noPindah, noTujuan;
	int menu;
	
	initT1(&T1);
	initT2(&T2);
	initT3(&T3);
	do{
		system("cls");
		printf("\n\t\t=== [TUGAS STACK ARRAY] ===\n");
		printf("\n\t[1]. Tower Hanoi");
		printf("\n\t[0]. Exit");
		printf("\n\t>>> "); scanf("%d", &menu);
		
		switch(menu){
			case 1 :
				do{
					system("cls");
					showTower(T1, T2, T3);
					printf("\n[*] Input 'd' Untuk Keluar\n");
					printf("\nMasukkan angka Tower Yang Hendak Dipindah	: "); fflush(stdin); scanf("%c", &noPindah);
						while(noPindah != 'a' && noPindah != 'b' && noPindah != 'c' && noPindah != 'd'){
							printf("\n[!] Tidak Valid");
							printf("\nMasukkan angka Tower Yang Hendak Dipindah	: "); fflush(stdin); scanf("%c", &noPindah);
						}
						if(noPindah == 'a' && isEmptyTower(T1)){
							printf("\n[!] Tidak Valid"); getch();
							continue;
						}else if(noPindah == 'b' && isEmptyTower(T2)){
							printf("\n[!] Tidak Valid"); getch();
							continue;
						}if(noPindah == 'c' && isEmptyTower(T3)){
							printf("\n[!] Tidak Valid"); getch();
							continue; 
						}
						
						if(noPindah == 'd'){
							break;
						}
					printf("\nMasukkan angka Tower Yang Hendak Dijadikan Tujuan	: "); fflush(stdin); scanf("%c", &noTujuan);
						while(noTujuan != 'a' && noTujuan != 'b' && noTujuan != 'c'){
								printf("\n[!] Tidak Valid");
								printf("\nMasukkan angka Tower Yang Hendak Dijadikan Tujuan	: "); fflush(stdin); scanf("%c", &noTujuan);
							}
						if(noTujuan == 'a' && isFullTower(T1) || noTujuan == noPindah){
							printf("\n[!] Tidak Valid"); getch();
							continue;
						}else if(noTujuan == 'b' && isFullTower(T2) || noTujuan == noPindah){
							printf("\n[!] Tidak Valid"); getch();
							continue;
						}if(noTujuan == 'c' && isFullTower(T3) || noTujuan == noPindah){
							printf("\n[!] Tidak Valid"); getch();
							continue; 
						}
			
					if(noPindah == 'a'){
						if(!isEmptyTower(T1)){
							tempo = popTower(&T1);
						}
					}else if(noPindah == 'b'){
						if(!isEmptyTower(T2)){
							tempo = popTower(&T2);
						}
					}else if(noPindah == 'c'){
						if(!isEmptyTower(T3)){
							tempo = popTower(&T3);
						}
					}
					
					if(noTujuan == 'a'){
						if(isEmptyTower(T1)){
							pushTower(&T1, tempo);
							printf("\n[+] Sukses");
						}else if(tempo < T1.angka[T1.top]){
							pushTower(&T1, tempo);	
							printf("\n[+] Sukses");
						}else{
							if(noPindah == 'a'){
								pushTower(&T1, tempo);
							}else if(noPindah == 'b'){
								pushTower(&T2, tempo);
							}else if(noPindah == 'c'){
								pushTower(&T3, tempo);
							}
							printf("\n[!] Invalid");
						}
					}else if(noTujuan == 'b'){
						if(isEmptyTower(T2)){
							pushTower(&T2, tempo);
							printf("\n[+] Sukses");
						}else if(tempo < T2.angka[T2.top]){
							pushTower(&T2, tempo);
							printf("\n[+] Sukses");	
						}else{
							if(noPindah == 'a'){
								pushTower(&T1, tempo);
							}else if(noPindah == 'b'){
								pushTower(&T2, tempo);
							}else if(noPindah == 'c'){
								pushTower(&T3, tempo);
							}
							printf("\n[!] Invalid");
						}
					}else if(noTujuan == 'c'){
						if(isEmptyTower(T3)){
							pushTower(&T3, tempo);
							printf("\n[+] Sukses");
						}else if(tempo < T3.angka[T3.top]){
							pushTower(&T3, tempo);	
							printf("\n[+] Sukses");
						}else{
							if(noPindah == 'a'){
								pushTower(&T1, tempo);
							}else if(noPindah == 'b'){
								pushTower(&T2, tempo);
							}else if(noPindah == 'c'){
								pushTower(&T3, tempo);
							}
							printf("\n[!] Invalid");
						}
					}
					getch();
				}while(noPindah!='d');
					printf("\n[*] Exiting...");
			break;
			
			case 0 :
				printf("\nERIC DANISWARA OCTA WIJAYA - 220711618 - D");
			break;
			
			default : 
				printf("\n[!] Menu Tidak Ada");
			break;
		}getch();
	}while(menu!=0);
	return 0;
}
