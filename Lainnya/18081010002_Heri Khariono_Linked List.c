#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
	int data;
    struct node *next;
	};
	typedef struct node Node;

	void insertNode(Node **head, Node *pPre, Node *pNew);
	void tambahAwal(Node **head);
	void tambahData(Node **head);
	void deleteNode(Node **head, Node *pPre, Node *pCur);
	void hapusData(Node **head);
	void totalData(Node *head);
	void isiList(Node *head);
	void quit(Node *head);	

int main(){
  	Node *head;
  	char pilih;

  	head = NULL;
  	do{
    	system("cls");

    	printf(" MENU UTAMA\n");
     	printf(" 1. Tambah data di awal list\n");
     	printf(" 2. Tambah data di tengah list\n");
     	printf(" 3. Hapus data\n");
     	printf(" 4. Cetak total data\n");
     	printf(" 5. Keluar                           \n");
     	printf(" MASUKKAN PILIHAN = ");
     	fflush(stdin);
     	scanf("%c", &pilih);
     
     	//pilihan menu
	 	if (pilih == '1')
     		tambahAwal(&head);
     	else if (pilih == '2')
			tambahData(&head);
     	else if (pilih == '3')
    		hapusData(&head);
     	else if (pilih == '4'){
    		totalData(head);
		getch();
		}
	}
	//Quit (Keluar)
  	while (pilih != '5');
  	printf("Anda telah keluar");
  	quit(head);
  	}
  	
	//Bantu (Insert Node)
	void insertNode(Node **head, Node *pPre, Node *pNew){
    	if (pPre == NULL){
	   		pNew -> next = *head;
    		*head = pNew;
    		}
    		else {
				pNew -> next = pPre -> next;
    			pPre -> next = pNew;
				}
			}
	
	//Menu Tambah Data di Awal List
	void tambahAwal(Node **head){
  		int bil;
  		Node *pTemp;
  		system("cls");
  		fflush(stdin);
  		printf("\n Masukkan bilangan integer = ");
  		fflush(stdin);
  		scanf("%d", &bil);
  		pTemp = (Node *)malloc(sizeof(Node));

  		if(pTemp != NULL){
  			pTemp->data = bil;
      		pTemp->next = NULL;
      		insertNode(head, NULL, pTemp);
  		}
  		else{
      		printf(" Alokasi memori gagal");
      		getch();
  			}
		}

	//Menu Tambah Data di Tengah List
	void tambahData(Node **head){
  		int pos, bil;
  		Node *pTemp, *pCur;
  		system("cls");
  		isiList(*head);
  		printf("\n Posisi penyisipan setelah data bernilai = ");
  		fflush(stdin);
  		scanf("%d", &pos);
  		printf("\n Data yang disisipkan = ");
  		fflush(stdin);
  		scanf("%d", &bil);

  		pCur = *head;
  		while (pCur != NULL && pCur -> data != pos){
    	pCur = pCur -> next;
  		}
		pTemp = (Node *)malloc(sizeof(Node));
		if (pCur == NULL){
     		printf("\n Node tidak ditemukan");
     		getch();
  		}
  		else if (pTemp == NULL){
     		printf("\n Alokasi memori gagal");
     		getch();
  		}
  		else{
    		pTemp->data = bil;
    		pTemp->next = NULL;
    		insertNode(head, pCur, pTemp);
  			}
		}

	//Bantu (Delete Node)
	void deleteNode(Node **head, Node *pPre, Node *pCur){
		if (pPre == NULL)
  			*head = pCur -> next;
		else
			pPre -> next = pCur -> next;
			free(pCur);
	}
	
	//Menu Hapus Data
	void hapusData(Node **head){
  		int pos;
  		Node *pCur, *pPre;
  		system("cls");
  		isiList(*head);
  		printf("\n Data yang akan dihapus = ");
  		fflush(stdin);
  		scanf("%d", &pos);

  		pPre = NULL;
  		pCur = *head;
  		while (pCur != NULL && pCur -> data != pos) {
    		pPre = pCur;
    		pCur = pCur -> next;
  		}
		if (pCur == NULL){
     		printf("\n Node tidak ditemukan");
     		getch();
  			}
  			else
    			deleteNode(head, pPre, pCur);
		}
		
	//Menu Total Data
	void totalData(Node *head){
		Node *pWalker;
    	system("cls");
		pWalker = head;
		while (pWalker != NULL){
   		printf(" %d ->", pWalker -> data);
   		pWalker = pWalker -> next;
   		}
		printf(" NULL");
		printf("\n Total list = %d",pWalker);
	}
		
	//Bantu (Isi List)
	void isiList(Node *head){	
		Node *pWalker;
    	system("cls");
		pWalker = head;
		while (pWalker != NULL){
   		printf(" %d ->", pWalker -> data);
   		pWalker = pWalker -> next;
   		}
		printf(" NULL");
		}
	
	//Menu Quit (Keluar)
	void quit(Node *head){
		Node *pTemp;
		while(head != NULL){
   		pTemp = head;
    	head = head->next;
    	free(pTemp);
  		}
	}
