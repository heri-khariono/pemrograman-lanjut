#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	system("color f0");
	int i,j,cari;
	int A[7]={6,3,7,8,12,34,90};

	printf("  ___________________________\n");
	printf(" | Program Sequential Search |\n");
	printf(" |      {6,3,7,8,12,34,90}   |\n");
	printf(" |___________________________|\n\n");
	printf(" Masukkan angka yang dicari = ");
	scanf("%d",&cari);
	
	for(i=0;i<8;i++){
		if(A[i]==cari){
			printf("\n Angka %d ditemukan pada indeks ke %d",cari,i+1);
			break;
		}
	}
	for(j=0;j<8;j++){
		if(A[i]!=cari){
			printf("\n Angka %d tidak ditemukan",cari);
			break;
		}
	}
	return 0;
}
