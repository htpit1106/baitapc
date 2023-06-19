#include<stdio.h>
#include<string.h> 

int main(){
	char s[1000],w[1000],j=0;
	printf("Nhap xau S: ");
	gets(s);
	printf("Nhap xau W: ");
	fflush(stdin);gets(w);
	char *kq = strstr(s,w);
	if (kq != NULL) printf("W xuat hien trong S o vi tri %d",kq - &s[0]);
	else printf("W khong xuat hien trong S");
	printf("\n");
	return 0;
}
