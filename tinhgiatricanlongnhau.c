#include <stdio.h>
#include <math.h>
int main(){
	int N,i;
	float f;
	printf("N = "); scanf("%d",&N);f=0;
	for (i=N;i>=1; i--){
		f=sqrt(i+f);

	}
	printf("F(n) = %g",f);
	
	
	return 0;
}
