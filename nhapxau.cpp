#include <stdio.h>
#include <string.h>

int main (){
	int n,i;
	char c[n][100];

	scanf("%d",&n);
	for (i=0; i<n;i++) {
		fflush(stdin);
		printf("a[%d] = ", i+1); 
		gets(c[i]);		
	}
	for (i=0; i<n ; i++) printf("%s ",c[i]);
	
	
	return 0;
}
