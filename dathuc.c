#include<stdio.h>

int main(){
	float x,a1,a2,a3,a4,a0;
	printf("X = ");scanf("%f",&x);
	printf("A0 = ");scanf("%f",&a0);
	printf("A1 = ");scanf("%f",&a1);
	printf("A2 = ");scanf("%f",&a2);
	printf("A3 = ");scanf("%f",&a3);
	printf("A4 = ");scanf("%f",&a4);
	printf("f(x) = %g",a0 + a1*x +a2*x*x+a3*pow(x,3)+a4*pow(x,4));
	return 0;
}
