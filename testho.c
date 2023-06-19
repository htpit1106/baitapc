#include <stdio.h>
#include <math.h>
void main (){
	int N,i;
	int sum=0;
	printf("N = ");scanf("%d",&N);
	printf("m lon nhat = ");
	for (i=1; ;i++) {
		sum += i;
		if(sum>=N) break;
	}
		printf("%d",i-1);
	}
