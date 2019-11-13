#include <stdio.h>
#include <stdlib.h>

int main() {
	system("color f0");
	int k, cari, kanan, kiri, tengah;
	int data[10]={1, 2 , 3 , 4, 12, 23, 34, 45, 56, 67};
	
	printf(" ___________________________________________________\n");
	printf("|                   Binnary Search                  |\n");
	printf("|                                                   |\n");	
	printf("|  data = { 1, 2 , 3 , 4, 12, 23, 34, 45, 56, 67 }  |\n");
	printf("|___________________________________________________|\n\n");
	printf("Masukkan data yang dicari : ");
	scanf("%d", &cari);
	k=0;
	kiri=0;
	kanan=9;
		while(kanan >= kiri)
    	{
       		tengah=(kanan+kiri)/2;
    	if(data[tengah]==cari)
		{
		k++;
		break;
    	}
		if(data[tengah]<cari)
    	{
			kiri=tengah+1;	
    	}
    	else
    	{
    	    kanan=tengah-1;
	    	}
		}
    	if (k>0)
    	{
    		printf("Data %d ditemukan\n", cari);
    	}
   		else
    	{
      		printf("Data %d tidak ditemukan\n", cari);
    	}
		getch();
	
	return 0;
}
