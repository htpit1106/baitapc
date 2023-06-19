#include <stdio.h>

int main(){
	float a,b,c;
	printf("A = "); scanf("%f",&a);
	printf("B = "); scanf("%f",&b);
	printf("C = "); scanf("%f",&c);
	if ((c>a && c<b)|| (c<a && c>b) ) {
	 printf("X = %g",c);
	} else {
	
		if ((a>b && a<c) || (a<b && a>c) ){
		 printf("X = %g",a);
		}
		else 
			 printf("X = %g",b);
	}
	return 0;
}
