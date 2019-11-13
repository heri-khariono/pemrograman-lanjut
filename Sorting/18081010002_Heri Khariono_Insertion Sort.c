#include <stdio.h>
#include <stdlib.h>


int main()
{
	system("color f0");
	int a,b,temp;
	int angka[7]={30,12,43,1,11,7,9};
	
	printf(" ____________________________________________\n");
	printf("|                                            |\n");
	printf("|                Insertion Sort              |\n");
	printf("|____________________________________________|\n");
	
	
	for(a=0; a<7; a++){
		for(b=a; b>00 && angka[b] < angka[b-1]; b--){
			temp=angka[b-1];
			angka[b-1]=angka[b];
			angka[b]=temp;
		}
	}
	for(a=0; a<7; a++){
		printf(" %d ",angka[a]);
	}
	return 0;
}
