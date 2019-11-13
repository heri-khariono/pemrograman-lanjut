#include <stdio.h>
#include <stdlib.h>

int main(){
	system("color f0");
	int nilai[100];
	int i,j,q,temp,batas,kiri,tengah,kanan,cari,k,posisi;
	
	
	printf(" ____________________________________________\n");
	printf("|                                            |\n");
	printf("|            INTERPOLATION SEARCH            |\n");
	printf("|____________________________________________|\n\n");
	printf("\n Masukkan batas = ");
	scanf("%d",&batas);
	fflush(stdin);

	printf("\n Masukkan %d Nilai = \n",batas);
	for(i=0;i<batas;i++){
		printf("  ");
		scanf("  %d",&nilai[i]);
		fflush(stdin);
	}	
	printf("\n");
	for(i=batas-2;i>=0;i--){
		for(j=0;j<=i;j++){
			if(nilai[j]>nilai[j+1]){
				temp=nilai[j];
				nilai[j]=nilai[j+1];
				nilai[j+1]=temp;
			}
		}
	}
	printf(" Setelah diurutkan = \n");
	for(i=0;i<batas;i++){
		printf("  %d",nilai[i]);
	}
	printf("\n\n Cari Nilai = "); 
	scanf("%d", &cari);
	
	k=0,kiri=0,kanan=batas;
	do{
		posisi=((cari-nilai[kiri])/(nilai[kanan]-nilai[kiri]))*(kanan-kiri)+kiri;
	if(nilai[posisi]==cari){
		k++;
		break;
	}
	if(nilai[posisi]>cari){
		kanan=posisi-1;
	}
	else if(nilai[posisi]<cari){
		kiri=posisi+1;
		}
	}
	while(cari>=nilai[kiri]&&cari<=nilai[kanan]);
	if(k==1){
		printf(" Angka %d ditemukan pada indeks ke-%d\n", cari, posisi+1);
	}
	else{
		printf(" Angka %d tidak ditemukan\n", cari);
		}
	
	return 0;
}
