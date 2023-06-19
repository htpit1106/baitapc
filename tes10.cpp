#include<stdio.h>
#include<string.h>
void xoa(char *a[1000], int *k){
	strcpy(a+k,a+k+1);
}


int main(){
	int char a[1000];
	int k=4;
 	gets(a);
	xoa(a,k);
	puts(a)	
	
	return 0;
}
