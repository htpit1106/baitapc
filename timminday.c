#include<stdio.h>

int main(){
	int n,i;
	float a[1000],min;
	printf("N = "); scanf("%d", &n);
	for(i=0;i<n; i++){
		printf("a[%d] = ",i);
	    scanf("%f",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if (min>a[i]) min=a[i];
	}
	
	printf("Gia tri nho nhat trong A: %g",min);
	return 0;
}
