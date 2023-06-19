#include <stdio.h>
#include<math.h>
int main(){
	int x;
	printf("Nhap x = "); scanf("%d",&x);
	if (x==3 || x<0) printf("Bieu thuc khong xac dinh");
	else printf("Ket qua: %g", (1+sqrt(x))/(x-3));
	return 0;
}
