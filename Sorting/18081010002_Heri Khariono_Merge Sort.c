#include <stdio.h>
#include <stdlib.h>

void merge(int kiri, int tengah, int kanan);
void mergeSort(int kiri, int kanan);
int a[100];

int main(){
	system("color f0");
	int n,i,batas;
	
	printf(" _____________________________________________________\n");
	printf("|                                                     |\n");
	printf("|                      Merge Sort                     |\n");
	printf("|_____________________________________________________|\n\n");
	printf(" Masukkan batas Array : ");
	scanf("%d",&n);

	if(n<=1){
		printf("Error !!");
	}
	else if(n>100){
		printf("Error !!");
	}
	else{	
	for(i=0;i<n;i++){
		printf(" Masukkan bilangan ke-%d : ",i);
		scanf("%d",&a[i]);
	}
}
printf("\n\n Data sebelum diurutkan : ");
for(i=0;i<n;i++){
	printf(" %d ",a[i]);
}
printf("\n\n Data setelah diurutkan : ");
mergeSort(0,n);
	for(i=1;i<=n;i++){
		printf(" %d ",a[i]);
	}
}

void merge(int kiri, int tengah, int kanan){
int h, i, j, k;
int b[50];
h = kiri;
i = kiri;
j = tengah+1;

while((h<=tengah)&&(j<=kanan)){
	if(a[h] < a[j]){
		b[i]=a[h];
		h++;
	}
	else{
		b[i]=a[j];
		j++;
	}
	i++;
	}
	if(h>tengah){
		for(k=j;k<=kanan;k++){
			b[i]=a[k];
			i++;
		}
	}
	else{
		for(k=h;k<=tengah;k++){
			b[i]=a[k];
			i++;
		}
	}
	for(k=kiri;k<=kanan;k++) 
		a[k]=b[k];
}

void mergeSort(int kiri, int kanan){
int tengah;
if(kiri<kanan){
	tengah=(kiri+kanan)/2;
	mergeSort(kiri,tengah);
	mergeSort(tengah+1,kanan);
	merge(kiri,tengah,kanan);
	}
}
