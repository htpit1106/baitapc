#include<stdio.h>
#include<stdlib.h>
// tim kiem k trong day a
// thuat toan jump, binary
// thuat toan chi hoat dong khi DL da duoc sap xep
int jumpsearch(int a[], int k, int n, int d){
	int i=0;
	int j=i+d;
	
	while (j<=n && a[j]<k){
		i = i+d;
		j = j+d;
	}
	if (j>n) j=n-1;
	while (a[i] <k){
		i ++;
		if (i>j || i>n) return -1;
	}
	if (a[i]==k) return i;
	else return -1;
}

int SentinelSearch(int a[], int n){
	
}
int binarysearch(int a[], int k, int n){
	int left=0, right = n-1;
	while (left <= right){
		int mid = (right + left)/2;
		
		if (a[mid] = k) return mid;
		else if (a[mid] > k)
				right = mid - 1;
		else
		
				left = mid + 1;
	
	}
	return -1;
}

int sentinel_search(int a[], int k, int n){
	a[n] = k;
	int i =0;
	while (a[i] != k){
		i++;
		if (i > n-1) return -1;
	}
	return i;
}
int main(){
	int a[100], n, k, d;
	FILE *f;
	f = fopen("C:\\Users\\phuon\\OneDrive\\Documents\\baitapc\\linearsearch.txt", "r");
	fscanf(f,"%d", &n);
	fscanf(f,"%d", &k);
	//fscanf(f,"%d", &d);
	for (int i=0; i<n; i++){
		fscanf(f,"%d", &a[i]);
	}

	printf("vi tri k la: %d", sentinel_search(a,k,n));
}
