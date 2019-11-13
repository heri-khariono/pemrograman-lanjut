#include <stdio.h>
#include <stdlib.h>

int main() 
{
	system("color f0");
	
	
	char Nama[30], Tempat[20], Bulan[10], Npm[20], Jk[10],Telpon[15];
	int Tanggal, Tahun;

	data :	
	printf("-------------------------------------------------------------------------\n|\t\t\t  MASUKKAN BIODATA ANDA \t\t\t|\n-------------------------------------------------------------------------\n");
	
	printf("Masukkan Nama : ");
	scanf("%s",&Nama);
	printf("Masukkan NPM : ");
	scanf("%s",&Npm);
	printf("Masukkan Tempat Lahir : ");
	scanf("%s",&Tempat);
	printf("Masukkan Tanggal Lahir :");
	scanf("%d",&Tanggal);
	printf("Masukkan bulan Lahir :");
	scanf("%s",&Bulan);
	printf("Masukkan Tahun Lahir :");
	scanf("%d",&Tahun);
	printf("Masukkan Jenis kelamin : ");
	scanf("%s",&Jk);
	printf("Masukkan No. Telpon :");
	scanf("%s",&Telpon);
	system("cls");
	
	
	printf("-------------------------------------------------------------------------\n|\t\t\t\t BIODATA \t\t\t\t|\n-------------------------------------------------------------------------\n");
	

		
	printf("Nama \t\t\t: %s", Nama);
	printf("\nNPM \t\t\t: %s", Npm);
	printf("\nTempat, Tanggal Lahir \t: %s, %d %s %d", Tempat,Tanggal,Bulan,Tahun);
	printf("\nJenis kelamin \t\t: %s", Jk);
	printf("\nNo. Telpon \t\t: %s", Telpon);
	
	{Sleep(5000);}  
	 
	printf("\n\nApakah ingin memasukkan biodata lagi ? [y/t] : ");//y=iya, t=tidak
		if (getch()== 't') {//get=scanf kusus karakter
		system("cls");
	    printf("\n\n\n-------------------------------------------------------------------------\n|\t\t\t\t  TERIMA KASIH \t\t\t\t|\n-------------------------------------------------------------------------\n");
	    }
	    else { system("cls");
				goto data;//kembali ke layer 
	        }
	
	return 0;
}
