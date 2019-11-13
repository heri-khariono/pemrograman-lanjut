#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	system("color f0");
	int tabel[3][3][3]={
						{{7,3,1},{3,1,2},{4,8,1}}
						,
						{{5,1,2},{-1,3,1},{6,9,2}}
						,
						{{-2,1,1},{7,8,9},{3,1,-1}}
					};
	int a, b, c, d, x; 
	float hasil, l1, l2;
	for(a=0; a<3; a++){
		printf("Tabel %d \n", a+1);
		printf("    x      y      z \n");		
		for(b=0; b<3; b++){
			for(c=0; c<3; c++){
				printf("  %3d  ", tabel[a][b][c]);
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
		
				l1= sqrt((pow(tabel[0][0][0] - tabel[0][1][0],2))+(pow(tabel[0][0][1] - tabel[0][1][1],2))+(pow(tabel[0][0][2] - tabel[0][1][2],2)));
				l2= sqrt((pow(tabel[0][1][0] - tabel[0][2][0],2))+(pow(tabel[0][1][1] - tabel[0][2][1],2))+(pow(tabel[0][1][2] - tabel[0][2][2],2)));			
				hasil=l1+l2;
				printf("Tabel 1 : \n");
				printf("Lintasan A ke B adalah %f \nLintasan B ke C %f \n",l1, l2);
				printf("Hasil = %f\n\n", hasil);
				
				l1= sqrt((pow(tabel[1][0][0] - tabel[1][1][0],2))+(pow(tabel[1][0][1] - tabel[1][1][1],2))+(pow(tabel[1][0][2] - tabel[1][1][2],2)));
				l2= sqrt((pow(tabel[1][1][0] - tabel[1][2][0],2))+(pow(tabel[1][1][1] - tabel[1][2][1],2))+(pow(tabel[1][1][2] - tabel[1][2][2],2)));			
				hasil=l1+l2;
				printf("Tabel 2 : \n");
				printf("Lintasan A ke B adalah %f \nLintasan B ke C %f \n",l1, l2);
				printf("Hasil = %f\n\n", hasil);
				
				l1= sqrt((pow(tabel[2][0][0] - tabel[2][1][0],2))+(pow(tabel[2][0][1] - tabel[2][1][1],2))+(pow(tabel[2][0][2] - tabel[2][1][2],2)));
				l2= sqrt((pow(tabel[2][1][0] - tabel[2][2][0],2))+(pow(tabel[2][1][1] - tabel[2][2][1],2))+(pow(tabel[2][1][2] - tabel[2][2][2],2)));			
				hasil=l1+l2;
				printf("Tabel 3 : \n");
				printf("Lintasan A ke B adalah %f \nLintasan B ke C %f \n",l1, l2);
				printf("Hasil = %f\n\n", hasil);
			}
		
