#include<stdio.h>

int main(){
	int n,i;
	float A[100];
	printf("N = "); scanf("%d", &n);	
	for (i=0;i<=n-1;i++)
	{
	printf("A[%d] = ",i);
	scanf("%f",&A[i]);		
	}
	printf("Cac phan tu o vi tri chan:");
	for (i=0;i<=n-1;i++)
	{
		if(i%2==0)printf(" %g",A[i]);
	}
	
	return 0;
}
