#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int x, n, i, hasil;
	
	printf("Masukkan nilai X : ");
	scanf("%d", &x);
	printf("Masukkan nilai n : ");
	scanf("%d", &n);
	
	i=1;
	hasil=1;
	
	for(i=1;i<=n;i++)
	{
		hasil=hasil*x;	
	}
	printf("Hasil bilangan %d pangkat %d adalah %d ",x,n, hasil);
	return 0;
}


