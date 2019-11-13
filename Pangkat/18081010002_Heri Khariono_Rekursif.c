#include <stdio.h>
#include <stdlib.h>


int main()
{
	//REKURSIF

	int x, n;
	
	printf("Masukkan nilai X : ");
	scanf("%d", &x);
	printf("Masukkan nilai n : ");
	scanf("%d", &n);
	printf("Hasil bilangan %d pangkat %d adalah %d ",x,n, pangkat(x,n));
	getch();
}
int pangkat(int x, int n)
{
	if(n==0){
		return 1;
	} 
		else{
			return x*pangkat(x, n-1);
		} 

	return 0;
}
