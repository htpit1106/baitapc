#include <stdio.h>

int main(){
	float x,a0,a1,a2,a3,a4;
	printf("X="); scanf("%f",&x);
	printf("A0="); scanf("%f",&a0);
	printf("A1="); scanf("%f",&a1);
	printf("A2="); scanf("%f",&a2);
	printf("A3="); scanf("%f",&a3);
	printf("A4="); scanf("%f",&a4);
	printf("f(x)=%.2f", a0 +a1*x +a2*x*x +a3*x*x*x +a4*x*x*x*x);
	return 0;
}
