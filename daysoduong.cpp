#include<stdio.h>

int main(){
	int x=3,i=0;
	while(x>0){
		printf("Hay nhap mot so duong: ");scanf("%d",&x);
		i++;
	}
	printf("Ban da nhap %d so nguyen duong!",i-1);
}
