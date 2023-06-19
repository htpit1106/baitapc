#include<stdio.h>
#include<stdlib.h>
// thuat toan tim kiem nhay
int jumpsearch(int a[], int k, int d, int n)
{
	int i=1, j=i+d;
	while (j<=n && a[j]> k){
		j=j+d;
		i=i+d;
	}	
	if (j>n) j = n-1;
	while(a[i]>k){
		i=i+1;
		if (i>j || i>n) return -1;
	}
	if (a[i]==k) return i;
	else return -1;
}
int main(){
	int a[100], k, n, d;
	FILE *f;
	f = fopen("C:\\Users\\phuon\\OneDrive\\Documents\\baitapc\\linearsearch.txt","r");
	if (f==NULL) printf("loi tao hoac doc file");
	fscanf(f,"%d",&n);
	fscanf(f,"%d",&k);
	fscanf(f,"%d",&d);
	for (int i=0; i<n; i++){
		fscanf(f,"%d",&a[i]);
	}

	printf("vi tri cua k la: %d", jumpsearch(a, k,d,n));
}
