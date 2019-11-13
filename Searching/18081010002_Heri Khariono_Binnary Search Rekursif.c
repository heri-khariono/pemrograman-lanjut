#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{	
	int data[10] = {1, 2 , 3 , 4, 12, 23, 34, 45, 56, 67};
	int k, l, n, cari, posisi;
	n = sizeof(data)/sizeof(data[0]);
	
	printf(" ___________________________________________________\n");
	printf("|                Binnary Search Rekursif            |\n");
	printf("|                                                   |\n");	
	printf("|  data = { 1, 2 , 3 , 4, 12, 23, 34, 45, 56, 67 }  |\n");
	printf("|___________________________________________________|\n\n");
	printf("Masukkan data yang dicari : ");
	scanf("%d", &cari);
    
    
	posisi = Search(data, 0, n-1, cari);
    
    if(posisi < 0)
	{
      printf("Angka %d tidak ditemukan", cari);
    }
	else 
	{
      printf("Angka %d ditemukan pada array indeks ke %d", cari, posisi+1);
    }
    getch();
    return 0;
}

int Search(int data[], int kiri, int kanan, int c)
{
    int tengah = (kiri+kanan)/2;
	if(kiri>kanan)
	{
      return -1;
    } 
	else if(data[tengah] == c)
	{
      return tengah;
    }
	else if(data[tengah] < c)
	{
      return Search(data, tengah+1, kanan, c);
    } 
	else 
	{
      return Search(data, kiri, tengah-1, c);
    }
}
