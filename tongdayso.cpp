#include<stdio.h>

int main(){
int n,i,a=0;
	printf("N = ");scanf("%d",&n);
	for(i=1;i<=n;i++)	
	a=a+i*(i-1)*(i+1);
	printf("A = %d",a);
	return 0;
}
