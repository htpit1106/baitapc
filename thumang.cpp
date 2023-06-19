#include <stdio.h>

int main(){
	int a[100],n,i,j,k,x;
	scanf("%d%d%d",&n,&k,&x);
	for (i=0; i< n;i++){
		printf("a%d",i+1);
		scanf("%d",&a[i]);
	}
		for (i=0; i< n;i++) printf("%4d",a[i]);
		printf("\n");
	for (i=n ;i>k; i--)
	{
		a[i]=a[i-1];
	}
	a[k]=x;
	n+=1;
		for (i=0; i< n;i++) printf("%4d",a[i]);
	return 0;
}
