#include<stdio.h>

int main(){
	int n, a[200],max,i,d=0;
	printf("N = ");scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("a[%d] = ",i);scanf("%d",&a[i]);
	}
	max = a[0];
	for (i=0;i<n;i++)
	{
	if (a[i]>max) max =a[i];
	}
for (i=0;i<n;i++)
	{
	if (a[i]==max) d++;
	}	
	Printf("Gia tri lown nhat cua A: %d",max);
	printf("\nSo phan tu co gia tri lon nhat: %d",d);
	
	return 0;
}
