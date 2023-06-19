#include <stdio.h>
#include <string.h>

int main(){
	char s[50];
	printf("Nhap vao xau ki tu: "); gets(s);
	int i,n=strlen(s);
	for (i=0;i<n/2;i++){
		if (s[i] != s[n-1-i]) 
			break;
		
	}
		if (i==n/2) printf("xau doi xung!");
		else
			printf("xau khong doi xung!");
		
		return 0;
}

