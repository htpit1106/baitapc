#include<stdio.h>
#include<string.h>
int main(){
	char w[2000];
	printf("Nhap W = "); gets(w);
	int i=0,j,n;
	n=strlen(w);

	// xoa nhung ki tu ' ' dau tien
	while (w[0]==' ') {
		strcpy(w,w+1);
		n--;
	}

	// xoa ki tu cuoi xau
	while (w[n-1]==' '){
		w[n-1]='\0';
		n--;
	}
	// xoa ki tu thua giua cac tu
	i = 1;
	while(w[i]!='\0')
	{
		if (w[i]== ' '  && w[i+1] == ' ') {
		strcpy(w,w+1);  
	
		}
	 	i++; 
	}
	printf("Chuan hoa = %s",w);
	return 0;
}
