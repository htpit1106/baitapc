#include<stdio.h>
#include<string.h>
int main() {
	char s[200], w[200];
	int *p, *i, a, b;
	printf("Nhap xau S: "); gets(s);
	printf("Nhap xau W: "); gets(w);
	p= strstr(s,w);
	a=p;
	i= &s;
	b=i;
	if(p!=NULL) printf("W xuat hien trong S o vi tri %d\n",a-b);
	else printf("W khong xuat hien trong S\n");
}
