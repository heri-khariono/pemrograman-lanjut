#include <stdio.h>
#include <stdlib.h>

struct data_mahasiswa
{
	int npm;
	float ipk;
};
typedef struct data_mahasiswa mhs;

int main()
{
	system("color f0");
	int i,j,cari,opsi;
	mhs data[6];
	
	data[0].npm = 18081001;
	data[1].npm = 18081002;
	data[2].npm = 18081003;
	data[3].npm = 18081004;
	data[4].npm = 18081005;
	data[5].npm = 18081006;
	
	data[0].ipk = 3.0;
	data[1].ipk = 3.2;
	data[2].ipk = 3.4;
	data[3].ipk = 3.6;
	data[4].ipk = 3.8;
	data[5].ipk = 4;

	menu :
    printf(" [MAIN MENU] \n\n");
    printf(" _______________________________");
    printf("\n| 1. DATA MAHASISWA (A-Z)	|\n| 2. DATA MAHASISWA (Z-A)	|\n| 3. PENCARIAN DATA (?)	  	|");	
	printf("\n|_______________________________|\n");	
    printf("\n Masukkan Menu = ");
    scanf("%d", &opsi);
    
	switch(opsi){
	case 1 :
		printf(" _______________________________\n");
		printf("|   [DATA MAHASISWA (A-Z)]	|\n");
		printf("|_______________________________|\n");
		for(i=0;i<6;i++){
			printf("|	NPM = %i   	|\n", data[i].npm);
			printf("|	IPK = %f		|\n", data[i].ipk);
			printf("|_______________________________|\n");
			}
			printf("\n\n===[Wait 10 seconds to return]===");
			Sleep(10000);
			system("cls");
			goto menu;
			break;
	
    case 2 :
    	printf(" _______________________________\n");
		printf("|   [DATA MAHASISWA (Z-A)]	|\n");
		printf("|_______________________________|\n");
		for(i=5; i>=0; i--){
			printf("|	NPM = %i   	|\n", data[i].npm);
			printf("|	IPK = %f		|\n", data[i].ipk);
			printf("|_______________________________|\n");
			}
			printf("\n\n===[Wait 10 seconds to return]===");
			Sleep(10000);
			system("cls");
			goto menu;
			break;
   	
    case 3 :
    	printf(" Masukkan NPM yang dicari = ");
		scanf("%d", &cari);
			for(i=0; i<=5; i++){
				if(data[i].npm == cari){
					printf(" _______________________________\n");
					printf("|   	PENCARIAN DATA	        |\n");
					printf("|_______________________________|\n");
					printf("|	NPM = %i   	|\n", data[i].npm);
					printf("|	IPK = %f		|\n", data[i].ipk);
					printf("|_______________________________|\n");
			 		printf("\n\n===[Wait 5 seconds to return]===");
					Sleep(5000);
					system("cls");
					goto menu;
					break;
				}
			}
			if(data[i].npm != cari){
				printf("\n Ket : Data tidak ditemukan");
				printf("\n\n===[Wait 3 seconds to return]===");
				Sleep(3000);
				system("cls");
				goto menu;   	
				break;
		}
		default :
				printf("\n Ket : Pilihan menu tidak ditemukan");
				printf("\n\n===[Wait 3 seconds to return]===");
				Sleep(3000);
				system("cls");
				goto menu;   	
				break;
	}
				
	return 0;
}

