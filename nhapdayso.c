#include<stdio.h>

int main(){
	int i,N,d=0;
	int a[100];
	printf("N = "); scanf("%d",&N);
	for (i=0;i<N;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Day A =");
	for (i=0;i<N;i++)
	{
		printf(" %d",a[i]);
		if(a[i]<0) d++;
	}
	
	
	printf("\nSo so am trong A: %d",d);
	return 0;
}
