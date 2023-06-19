#include<stdio.h>
#include<string.h>

int main(){
	char s[1000],w[1000],i=0,j=0,m;
	printf("Nhap xau S: ");
	fflush(stdin);gets(s);
	printf("Nhap xau W: ");
	fflush(stdin);gets(w);
	while (s[i]!='\0')
	{
		if (s[i]=w[j]) {
			j++;
			if (j=strlen(w)){
				break;
			}
		} else j=0;
		printf("%d\n",i);
		i++;
	}

	printf("W xuat hien trong S o vi tri %d",i);

	return 0;
}
