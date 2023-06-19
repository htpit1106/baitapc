#include<stdio.h>

int main(){
	int n;
	printf("N = ");scanf("%d",&n);	
	if (n%400 == 0 ||( n%4 == 0 && n%100 !=0)) 
		printf("%d la nam nhuan",n);
	else  
		printf("%d khong phai nam nhuan",n);
	return 0;
}
