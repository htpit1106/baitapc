#include<stdio.h>
#include<string.h>
int main(){
	char w[2000];
	printf("Nhap W = "); gets(w);
	int i,j,n;
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
	for (i=0;i<n ;i++){
		if (w[i]=32  && w[i+1] = 32) 
		for(j=i;j<n;j++) w[j]=w[j+1];
	}
	printf("%s",w);
	return 0;
}
