#include<stdio.h>
int main(){
	int n=8, m=9;
	int *p1=&n, *p2=&m;
	p1 = p2;
	printf("%d ",*p1);
	printf("%d ",*p2);
	printf("%x ",p1);

	printf("%x ",p2);
return 0;
}
