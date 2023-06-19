#include <stdio.h>
#include <string.h> 

int main(){
	int m,i,j;
	char a[100];
	fflush(stdin);
	gets(a); m=strlen(a);
	for (i=strlen(a);i>=1; i--)
	{
		if (a[i] == ' ')
		{
			for (j=i; j>=m ;j--)
				printf("%c",a[j]);
			
			m=i;
		}
		
	}
	
	
	
	return 0;
}
