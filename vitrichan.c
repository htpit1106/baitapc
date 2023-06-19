#include<stdio.h>

int main(){
	int n,i;
	float a[200];
	printf("N = "); scanf("%d", &n);	
	for (i=0;i<n;i++)
	{
	printf("a[%d] = ",i);
	scanf("%f",&a[i]);		
	}
	printf("Cac phan tu o vi tri chan:");
	for (i=0;i<n;i+=2)
	{
		printf(" %f",a[i]);
	}
	
	return 0;
}
