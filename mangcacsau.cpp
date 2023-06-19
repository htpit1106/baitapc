#include <stdio.h>
#include <string.h>


int main(){
	int n,i;
	char a[1000][1000];
	printf("N = "); scanf("%d",&n);
	fflush(stdin);
	for (i=0;i<n;i++)
	{
		printf("Ten ngon ngu lap trinh thu %d: ",i+1);
		fflush(stdin); gets(a[i]);
	}
	int min=strlen(a[0]), t= 0; 
	for (i=01;i<n;i++)
	{
		if (strlen(a[i])<=min){
		 min = strlen(a[i]);
		 t=i;
		}
	}
	printf("Ngon ngu ngan nhat cuoi cung la: %s",a[t]);
	return 0;
}
