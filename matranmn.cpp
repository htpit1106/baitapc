#include<stdio.h>

int main (){
	int m,n,i,j;
	printf("M = "); scanf("%d",&m);	
	printf("N = "); scanf("%d",&n);	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<n;j++)
		{
			printf("0 ");
		}
		printf("0\n");
		
	}
	return 0;
}
