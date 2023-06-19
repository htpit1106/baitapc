#include <stdio.h>
void menu(){
	printf("[1] Buoi sang\n");
	printf("[2] Buoi trua\n");
	printf("[3] Buoi chieu\n");
	printf("[4] Buoi toi\n");
	printf("[5] Ket thuc\n");
}
int main(){
	int i;
	menu();
	while (1>0) 
	{
		printf("Chon chuc nang: "); scanf("%d",&i);
		switch (i){
			case 1: printf("Chao buoi sang\n"); menu(); break;
			case 2: printf("Den gio nghi trua roi, di an thoi\n"); menu(); break;
			case 3: printf("Het gio lam viec, ve nha nao\n"); menu(); break;
			case 4: printf("Chuan bi ngu buoi toi\n"); menu(); break;	
			case 5: break;
			default: menu();
		}	
		if (i==5){
			printf("Chuc ngu ngon\n"); break;
		}
	}
	
	return 0;
}
