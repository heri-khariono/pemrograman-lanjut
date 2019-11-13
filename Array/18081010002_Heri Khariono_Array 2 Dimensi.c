#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
 int sks1, sks2, sks3, sks4, sks5, total_sks;
 float value1, value2, value3, value4, value5, ipk, nilai;
 char nilai1, nilai2, nilai3, nilai4, nilai5, nama;
 char npm[5][15];

 printf("Data Mahasiswa Semester 3\n\n"); 
 
 printf("Nama Mahasiswa = ");
 scanf("%s", &nama);
 fflush(stdin);
 printf("NPM = ");
 scanf("%ld[\n]", &npm);

 printf("Mata Kuliah    : Pancasila\n");
 printf("Masukkan Nilai = ");
 scanf ("%s", &nilai1);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks1);
 
 printf("Mata Kuliah    : Bela Negara\n");
 printf("Masukkan Nilai = ");
 scanf ("%s", &nilai2);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks2);
 
 printf("Mata Kuliah    : Pemrograman Dasar \n");
 printf("Masukkan Nilai = ");
 scanf ("%s", &nilai3);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks3);

 printf("Mata Kuliah    : Algoritma Dasar \n");
 printf("Masukkan Nilai = ");
 scanf ("%s", &nilai4);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks4);
 
 printf("Mata Kuliah    : Sistem Operasi \n");
 printf("Masukkan Nilai = ");
 scanf ("%s", &nilai5);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks5);

  if(nilai1=='A')
  {
   	value1 = 4;
  } 
  else if (nilai1=='B') 
  {
  	value1 = 3;
  } 
  else if (nilai1=='C') 
  {
   	value1 = 2;
  } 
  else if (nilai1=='D') 
  {
   	value1 = 1;
  } 
  else 
  {
  	value1 = 0;
  }
  
  
  if(nilai2=='A')
  {
   	value2 = 4;
  } 
  else if (nilai2=='B') 
  {
   	value2 = 3;
  } 
  else if (nilai2=='C') 
  {
   	value2 = 2;
  } 
  else if (nilai2=='D') 
  {
   	value2 = 1;
  } 
  else 
  {
   	value2 = 0;
  }


  if(nilai3=='A')
  {
   	value3 = 4;
  } 
  else if (nilai3=='B')
  {
   	value3 = 3;
  } 
  else if (nilai3=='C')
  {
  	value3 = 2;
  } 
  else if (nilai3=='D') 
  {
   	value3 = 1;
  } 
  else 
  {
   	value3 = 0;
  }


  if(nilai4=='A')
  {
   	value4 = 4;
  } 
  else if (nilai4=='B') 
  {
   	value4 = 3;
  } 
  else if (nilai4=='C') 
  {
   	value4 = 2;
  } 
  else if (nilai4=='D') 
  {
   	value4 = 1;
  } 
  else 
  {
   	value4 = 0;
  }
  

  if(nilai5=='A')
  {
   	value5 = 4;
  } 
  else if (nilai5=='B') 
  {
  	value5 = 3;
  } 
  else if (nilai5=='C') 
  {
   	value5 = 2;
  } 
  else if (nilai5=='D') 
  {
   	value5 = 1;
  } 
  else 
  {
   	value5 = 0;
  }
   
 total_sks    = sks1 + sks2 + sks3 + sks4 + sks5;
 nilai  = (value1*sks1) + (value2*sks2) + (value3*sks3) + (value4*sks4) + (value5*sks5);
 ipk = nilai/total_sks;
 
 printf("NAMA : %s", nama);
 printf("NPM  : %s", npm);
 printf(" _____________________________________________________________\n");
 printf("| No. |       Mata Kuliah          |   SKS     |   NILAI      |\n");
 printf("|_____|____________________________|___________|______________|\n");
 printf("| 1.  | Pancasila                  |     %d     |   %.0f          |\n", sks1, value1);
 printf("| 2.  | Bela Negara                |     %d     |   %.0f          |\n", sks2, value2);
 printf("| 3.  | Pemrograman Dasar          |     %d     |   %.0f          |\n", sks3, value3);
 printf("| 4.  | Algoritma Dasar            |     %d     |   %.0f          |\n", sks4, value4);
 printf("| 5.  | Sistem Operasi             |     %d     |   %.0f          |\n", sks5, value5);
 printf("|_____|____________________________|___________|______________|\n");
 printf("|                          Total SKS = %d SKS  IP = %.2f      |\n", total_sks, ipk);
 printf("|_____________________________________________________________|\n");
 getch();
}
