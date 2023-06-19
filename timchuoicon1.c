#include<stdio.h>
#include<string.h>
int main() {
	char s[200], w[200];
	int *p = strstr(s,w);;
	printf("Nhap xau S: "); gets(s);
	fflush(stdin); 
	printf("Nhap xau W: "); gets(w);
	
	if(p!=NULL) printf("W xuat hien trong S o vi tri %s\n",* - &s[0]);
	else printf("W khong xuat hien trong S\n");
}
