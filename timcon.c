#include<stdio.h>

int main(){
	char s[1000],w[1000],i=0,j=0,m;
	printf("Nhap xau S: ");
	fflush(stdin);gets(s);
	printf("Nhap xau W: ");
	fflush(stdin);gets(w);
	for (i=0;i<=strlen(s);i++)
	{
		if (s[i]=w[j]) {
			j++;
			if (j=strlen(w)-1){
			m=i;
				break;
			}
		} else j=0;
		
	}
	printf("%d",i);
	printf("W xuat hien trong S o vi tri %d",m);

	return 0;
}
