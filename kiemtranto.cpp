#include<stdio.h>
int  i;
  bool ktnt( int x){
	int ktnt = true;
	for (i=2;i<x;i++)
	if (x%i==0) {
	ktnt =  false;
	break;
	}
	return ktnt;
}

int main(){
	int n=2;
	if (ktnt(n)==1) printf("n la nto"); 
	else printf("n khong phai nto");
	
	return 0;
}
