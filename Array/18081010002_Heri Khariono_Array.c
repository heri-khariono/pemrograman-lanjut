#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main() {
	system("color f0");
	int i, n;
		int npm[7] = {68,69,70,71,72,73,74};
		float ipk[7] = {3.57,3.87,3.53,3.21,3.60,3.37,4.00};
	
			printf("Data Mahasiswa A-Z : \n\n");
			for(i = 0; i<7 ; i++){
				printf("NPM : %d IPK : %f\n", npm[i],ipk[i]);
				
			}
			
			printf("\n\nData Mahasiswa Z-A : \n\n");
			for(i = 6 ; i>=0 ; i--){
				printf("NPM : %d IPK : %f\n", npm[i],ipk[i]);
			}		
			printf("\nMasukkan NPM yang dicari : ");
			scanf("%d", &n);
			
			for(i = 0; i<=6; i++){
				if(n == npm[i]){
					printf("NPM : %d IPK : %f\n", npm[i],ipk[i]);
					break;
				}
				else{
					printf("NPM yang anda masukkan salah!!");
				}
			}
							
	return 0;
}



