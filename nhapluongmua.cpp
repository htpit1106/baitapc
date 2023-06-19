#include <stdio.h>

int main(){
	int n, a[n][n],i,j;
	printf("nhap kich thuoc"); scanf("%d",&n);
	for (i=0;i<n; i++)
	{
		for (j=0;j<n;j++)
		{
			printf("a[%d][%d]",i+1,j+1);scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<n;i++)
	{
	for(j=0;j<n;j++) printf("%4d",a[i][j]);
	printf("\n");
	}
	// tao tam giac tren
	
	
	
	
	// tao tam giac duoi
	return 0;
}
