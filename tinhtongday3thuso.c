#include <stdio.h>

int  main(){
	int N,i,A;
	A=0;
	printf("N = ");scanf("%d",&N);
	for (i=2;i<=N; i++)
	{
		A = A + (i-1)*i*(i+1);
	}
	printf("A = %d",A);
	return 0;
}
