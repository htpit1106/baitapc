#include <stdio.h>
int main(){
	int N,i,d;
	printf("N = ");scanf("%d",&N);	
	d=0;
	for (i=1; i<=N; i++) if(N%i==0) d+=1;
	printf("So %d co %d uoc so.",N,d);
	return 0;
}
