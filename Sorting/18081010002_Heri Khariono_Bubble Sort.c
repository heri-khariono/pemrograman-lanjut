#include <stdio.h>
#include <stdlib.h>

int main() {
	system("color f0");
	int i,j,temp,batas;
	int nilai[100];
	
	printf(" ____________________________________________\n");
	printf("|                                            |\n");
	printf("|                BUBBLE SORT                 |\n");
	printf("|____________________________________________|\n");
		
	printf("\n Masukkan batas = ");
	scanf("%d",&batas);
	fflush(stdin);
	
	printf("\n Masukkan %d angka = \n",batas);
	for(i=0;i<batas;i++){
		printf("  ");
		scanf("  %d",&nilai[i]);
		fflush(stdin);
	}	
	for(i=batas-2;i>=0;i--){
		for(j=0;j<=i;j++){
			if(nilai[j]>nilai[j+1]){
				temp=nilai[j];
				nilai[j]=nilai[j+1];
				nilai[j+1]=temp;
			}
		}
	}
	printf("\n Setelah Sorting = \n");
	for(i=0;i<batas;i++){
		printf("  %d",nilai[i]);
	}
	return 0;
}
