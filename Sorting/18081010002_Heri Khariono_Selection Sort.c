#include <stdio.h>
#include <stdlib.h>


int main(){
	system("color f0");
	int angka[7]={5,0,7,32,44,11,71};
	int a,b,temp,min;
	
	printf(" ____________________________________________\n");
	printf("|                                            |\n");
	printf("|               Selection Sort               |\n");
	printf("|____________________________________________|\n");
	
	for(a=0; a<7; a++){
		min=a;
		for(b=a; b<7; b++){
			if(angka[b] < angka[min]){
				min=b;
			}
		}
		temp=angka[a];
		angka[a]=angka[min];
		angka[min]=temp;
	}
	for(a=0; a<7; a++){
		printf("%d ", angka[a]);
	}
	return 0;
}
