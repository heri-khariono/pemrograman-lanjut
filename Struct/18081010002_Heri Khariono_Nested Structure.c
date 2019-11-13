#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct rekening
{
	char nama[20];
	long int norek;
	char bank[20];
	long int saldo;
};
typedef struct rekening rk;

struct alamat
{
	char jalan[20];
	char kota[20];
	char provinsi[20];
};
typedef struct alamat almt;

struct lahir
{
	int hari;
	char bulan[20];
	int tahun;
};
typedef struct lahir ttl;

int main() 
{
	char i, j, pilih; 
	char *cari;
	char *cari2;
	long int jumlah, max, min, cari3;
	int d;
	
	system("color f0");
	
	rk data[3];
	strcpy(data[0].nama,"Ana");
	data[0].norek = 1000234143;
	strcpy(data[0].bank,"BCA");
	data[0].saldo = 100000;
	strcpy(data[1].nama,"Ani");
	data[1].norek = 1998846771;
	strcpy(data[1].bank,"BRI");
	data[1].saldo = 750000;
	strcpy(data[2].nama,"Ayu");
	data[2].norek = 1300391227;
	strcpy(data[2].bank,"BNI");
	data[2].saldo = 220000;
	
	almt rum[3];
	strcpy(rum[0].jalan,"JL. raya Rungkut");
	strcpy(rum[0].kota,"Surabaya ");
	strcpy(rum[0].provinsi,"Jawa Timur  ");
	strcpy(rum[1].jalan,"JL. raya sudirman");
	strcpy(rum[1].kota,"Surakarta");
	strcpy(rum[1].provinsi,"Jawa Tengah");
	strcpy(rum[2].jalan,"JL. raya A. Yani");
	strcpy(rum[2].kota,"Bandung ");
	strcpy(rum[2].provinsi,"Jawa Barat   ");
	
	ttl date[3];
	date[0].hari = 22;
	strcpy(date[0].bulan,"Juli");
	date[0].tahun= 1999;
	date[1].hari = 17;
	strcpy(date[1].bulan,"Juni");
	date[1].tahun=2001 ;
	date[2].hari = 9;
	strcpy(date[2].bulan," Mei ");
	date[2].tahun= 2007;
	
		menu :
			
		printf("===========================================================================\n");
		printf("|                    HERI KHARIONO [18081010002]                          |\n");
		printf("===========================================================================\n");
			
		printf(" __________________________________________________________\n");
		printf("|                      PILIHAN MENU                        |\n");
		printf("|__________________________________________________________|\n");
		printf("|1. Tampilan data Nasabah \t\t\t\t   |\n|2. cari data berdasarkan Nama/No. Rekening \t\t   |\n|3. Akumulasi Saldo \t\t\t\t\t   |\n|4. Cari Nasabah berdasarkan Kota/provinsi \t\t   |\n|5. Tampilan Nasabah \t\t\t\t\t   |\n|6. saldo terbanyak & terkecil\t\t\t\t   |\n");
		printf("|__________________________________________________________|\n");
		printf("\n\nMasukkan Pilihan Anda : ");
		scanf("%d", &pilih);
		system("cls");
		if(pilih == 1){	
			printf(" ____________________________________________________________________________________________________________\n");
			printf("|                                        DATA NASABAH BANK                                                   |\n");
			printf("|____________________________________________________________________________________________________________|\n");
			printf("| NAMA| TANGGAL LAHIR  | NO. REKENING | BANK |      SALDO      |                  ALAMAT                     |");
			printf("\n|_____|________________|______________|______|_________________|_____________________________________________|\n");
			for(i=0; i<3; i++){
			printf("| %s | %d  %s  %d |  %ld  | %s  |   Rp.%ld     | %s,  %s,  %s |\n", data[i].nama, date[i].hari, date[i].bulan,date[i].tahun,data[i].norek,data[i].bank,data[i].saldo,rum[i].jalan,rum[i].kota,rum[i].provinsi);
			}
			printf("|_____|________________|______________|______|_________________|_____________________________________________|\n");
			printf("\n\n Tunggu dalam 10 detik !!");
			{Sleep(10000);};
			system("cls");
			goto menu;
			}
		
		if(pilih == 2){
		printf("1. search Nama \n2. search No. Rekening \n");
		printf("\nSelect Search : ");
		scanf("%d", &pilih);
			if(pilih == 1){
			printf("Masukkan nama yang dicari : ");
			scanf("%s", &cari);
				for(i=0; i<3; i++){
				if(data[i].nama != cari){
				printf(" ____________________________________________________________________________________________________________\n");
				printf("|                                        DATA NASABAH BANK                                                   |\n");
				printf("|____________________________________________________________________________________________________________|\n");	
				printf("| NAMA| TANGGAL LAHIR  | NO. REKENING | BANK |      SALDO      |                  ALAMAT                     |");
				printf("\n|_____|________________|______________|______|_________________|_____________________________________________|\n");
				printf("| %s | %d  %s  %d |  %ld  | %s  |   Rp.%ld     | %s,  %s,  %s |\n", data[i].nama, date[i].hari, date[i].bulan,date[i].tahun,data[i].norek,data[i].bank,data[i].saldo,rum[i].jalan,rum[i].kota,rum[i].provinsi);
				printf("|_____|________________|______________|______|_________________|_____________________________________________|\n");		
				printf("\n\n Tunggu dalam 10 detik !!");
				printf("Tunggu dalam 10 detik!!");
				{Sleep(10000);};
				system("cls");
				goto menu;	
				break;				
				}
			}
		}
				else {
					printf(" ____________________________________________\n");
					printf("|                                            |\n");
					printf("|                Inputan Salah!!             |\n"); 
					printf("|____________________________________________|\n\n");
					printf("Tunggu dalam 10 detik!!");
					{Sleep(10000);};
						system("cls");
						goto menu;
						}
					}
			if(pilih == 2){
				printf("Masukkan No. Rekening yang dicari : \n");
				scanf("%ld", &cari3);
				for(i=0; i<3; i++){
					if(data[i].norek != cari3){
					printf(" ____________________________________________________________________________________________________________\n");
					printf("|                                        DATA NASABAH BANK                                                   |\n");
					printf("|____________________________________________________________________________________________________________|\n");	
					printf("| NAMA| TANGGAL LAHIR  | NO. REKENING | BANK |      SALDO      |                  ALAMAT                     |");
					printf("\n|_____|________________|______________|______|_________________|_____________________________________________|\n");
					printf("| %s | %d  %s  %d |  %ld  | %s  |   Rp.%ld     | %s,  %s,  %s |\n", data[i].nama, date[i].hari, date[i].bulan,date[i].tahun,data[i].norek,data[i].bank,data[i].saldo,rum[i].jalan,rum[i].kota,rum[i].provinsi);
					printf("|_____|________________|______________|______|_________________|_____________________________________________|\n\n");	
					printf("Tunggu dalam 10 detik!!");
					{Sleep(10000);};
					system("cls");;
					goto menu;
					break;
					}
					else{
						printf(" ____________________________________________\n");
						printf("|                                            |\n");
						printf("|                Inputan Salah!!             |\n"); 
						printf("|____________________________________________|\n\n"); 
						printf("Tunggu dalam 10 detik!!");
						{Sleep(10000);};
						system("cls");
						goto menu;
						break;
						}
					}
				}
		if(pilih == 3){
			jumlah=data[0].saldo+data[1].saldo+data[2].saldo;
			printf(" _______________________________________\n");
			printf("|            AKUMULASI SALDO            |\n");
			printf("|_______________________________________|\n");			
			for(i=0; i<3; i++){
			printf("|                  Rp.%ld            |\n",data[i].saldo );
			}
			printf("|_______________________________________|\n");
			printf("| TOTAL         :  Rp.%ld           |\n",jumlah);
			printf("|_______________________________________|\n\n");
			printf("\nTunggu dalam 10 detik!!");
			 {Sleep(10000);};
				system("cls");
				goto menu;
				}
		if(pilih == 4){
			printf("1. search Kota \n2. search No. Provinsi \n");
			printf("\nSelect Search : ");
			scanf("%d", &pilih);
			if(pilih == 1){
			printf("Masukkan nama yang dicari : ");
			scanf("%s", &cari);
			for(i=0; i<3; i++){
				if(rum[i].kota != cari){
				printf(" ____________________________________________________________________________________________________________\n");
				printf("|                                        DATA NASABAH BANK                                                   |\n");
				printf("|____________________________________________________________________________________________________________|\n");	
				printf("| NAMA| TANGGAL LAHIR  | NO. REKENING | BANK |      SALDO      |                  ALAMAT                     |");
				printf("\n|_____|________________|______________|______|_________________|_____________________________________________|\n");
				printf("| %s | %d  %s  %d |  %ld  | %s  |   Rp.%ld     | %s,  %s,  %s |\n", data[i].nama, date[i].hari, date[i].bulan,date[i].tahun,data[i].norek,data[i].bank,data[i].saldo,rum[i].jalan,rum[i].kota,rum[i].provinsi);
				printf("|_____|________________|______________|______|_________________|_____________________________________________|\n\n");	
				printf("\n\n Tunggu dalam 10 detik !!\n");
				{Sleep(10000);};
				system("cls");
				goto menu;
				break;
				}
				else {
					printf(" ____________________________________________\n");
					printf("|                                            |\n");
					printf("|                Inputan Salah!!             |\n"); 
					printf("|____________________________________________|\n\n");
					printf("Tunggu dalam 10 detik!!");
					{Sleep(10000);};
					system("cls");
					goto menu;
					break;
					}
				}
			}
			if(pilih == 2){
				printf("Masukkan Provinsi yang dicari : \n");
				scanf("%s", &cari2);
				for(i=0; i<3; i++){
				if(rum[i].provinsi != cari2){
					printf(" ____________________________________________________________________________________________________________\n");
					printf("|                                        DATA NASABAH BANK                                                   |\n");
					printf("|____________________________________________________________________________________________________________|\n");	
					printf("| NAMA| TANGGAL LAHIR  | NO. REKENING | BANK |      SALDO      |                  ALAMAT                     |");
					printf("\n|_____|________________|______________|______|_________________|_____________________________________________|\n");
					printf("| %s | %d  %s  %d |  %ld  | %s  |   Rp.%ld     | %s,  %s,  %s |\n", data[i].nama, date[i].hari, date[i].bulan,date[i].tahun,data[i].norek,data[i].bank,data[i].saldo,rum[i].jalan,rum[i].kota,rum[i].provinsi);
					printf("|_____|________________|______________|______|_________________|_____________________________________________|\n\n");	
					printf("Tunggu dalam 10 detik!!");
					{Sleep(10000);};
					system("cls");;
					goto menu;
					break;
					}
				else{
					printf(" ____________________________________________\n");
					printf("|                                            |\n");
					printf("|                Inputan Salah!!             |\n"); 
					printf("|____________________________________________|\n\n");
					printf("Tunggu dalam 10 detik!!");
					{Sleep(10000);};
					system("cls");
					goto menu;
					}
				}
			}	
		}
		if(pilih == 5){		
			for(i=0; i<3; i++){
			printf(" ________________________________________________________________\n");
			printf("|                  TAMPILAN NASABAH                              |\n");
			printf("|________________________________________________________________|\n");
			printf("| Nama           | %s                     \t\t\t |\n",data[i].nama );
			printf("| Tanggal Lahir  | %d %s %d               \t\t\t |\n",date[i].hari, date[i].bulan,date[i].tahun );
			printf("| Alamat         | %s, %s, %s     |\n",rum[i].jalan,rum[i].kota,rum[i].provinsi);
			printf("|________________|_______________________________________________|\n\n");
			}	
			printf("\nTunggu dalam 10 detik!!");
			{Sleep(10000);};
				system("cls");
				goto menu;
				}
		if(pilih == 6){
			
			rk data[3];
			strcpy(data[0].nama,"Ana");
			data[0].norek = 1000234143;
			strcpy(data[0].bank,"BCA");
			data[0].saldo = 100000;
			strcpy(data[1].nama,"Ani");
			data[1].norek = 1998846771;
			strcpy(data[1].bank,"BRI");
			data[1].saldo = 750000;
			strcpy(data[2].nama,"Ayu");
			data[2].norek = 1300391227;
			strcpy(data[2].bank,"BNI");
			data[2].saldo = 220000;
	
			almt rum[3];
			strcpy(rum[0].jalan,"JL. raya Rungkut");
			strcpy(rum[0].kota,"Surabaya ");
			strcpy(rum[0].provinsi,"Jawa Timur  ");
			strcpy(rum[1].jalan,"JL. raya sudirman");
			strcpy(rum[1].kota,"Surakarta");
			strcpy(rum[1].provinsi,"Jawa Tengah");
			strcpy(rum[2].jalan,"JL. raya A. Yani");
			strcpy(rum[2].kota,"Bandung ");
			strcpy(rum[2].provinsi,"Jawa Barat   ");
	
			ttl date[3];
			date[0].hari = 22;
			strcpy(date[0].bulan,"Juli");
			date[0].tahun= 1999;
			date[1].hari = 17;
			strcpy(date[1].bulan,"Juni");
			date[1].tahun=2001 ;
			date[2].hari = 9;
			strcpy(date[2].bulan," Mei ");
			date[2].tahun= 2007;
			
			max=1;min=0;
			for(i=max;i>=min;i--){
				for(j=min;j<max;j++){
				if(max>data[j].norek)
				max=data[j].saldo;
					if(max<data[i].saldo)
					min=data[i].saldo;
					printf(" ________________________________________________________________\n");
					printf("|            TAMPILAN NASABAH SALDO TERBANYAK                    |\n");
					printf("|________________________________________________________________|\n");
					printf("| Nama           | %s                     \t\t\t |\n",data[i].nama );
					printf("| Tanggal Lahir  | %d %s %d               \t\t\t |\n",date[i].hari, date[i].bulan,date[i].tahun );
					printf("| No. Rekening   | %ld                    \t\t |\n",data[i].norek );
					printf("| BANK           | %s                     \t\t\t |\n",data[i].bank );
					printf("| Saldo          | %ld                    \t\t\t |\n",data[i].saldo );
					printf("| Alamat         | %s, %s, %s     |\n",rum[j].jalan,rum[i].kota,rum[i].provinsi);
					printf("|________________|_______________________________________________|\n\n");
				
					printf(" ________________________________________________________________\n");
					printf("|             TAMPILAN NASABAH SALDO TERKECIL                    |\n");
					printf("|________________________________________________________________|\n");
					printf("| Nama           | %s                     \t\t\t |\n",data[j].nama );
					printf("| Tanggal Lahir  | %d %s %d               \t\t\t |\n",date[j].hari, date[j].bulan,date[j].tahun );
					printf("| No. Rekening   | %ld                    \t\t |\n",data[j].norek );
					printf("| BANK           | %s                     \t\t\t |\n",data[j].bank );
					printf("| Saldo          | %ld                    \t\t\t |\n",data[j].saldo );
					printf("| Alamat         | %s, %s, %s     |\n",rum[j].jalan,rum[j].kota,rum[j].provinsi);
					printf("|________________|_______________________________________________|\n\n");
					}
				}
					printf("\nTunggu dalam 10 detik!!");
					{Sleep(10000);};
					system("cls");
					goto menu;
					}
		if(pilih>6){
			printf(" ____________________________________________\n");
			printf("|                                            |\n");
			printf("|                Inputan Salah!!             |\n"); 
			printf("|____________________________________________|\n\n");
			printf("\nTunggu dalam 10 detik!!");
			{Sleep(10000);};
			system("cls");
			goto menu;
			}
	return 0;
}
