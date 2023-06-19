#include<stdio.h>
#include<stdlib.h>

int binarysearch(int a[], int n, int k)
{
	int left = 0, right = n-1;
	int mid;
	while (left <= right){
		mid = (left + right)/2;
		
		if (a[mid] == k) return mid;
		else if (a[mid] < k) 
				left = mid + 1;
			 else
				right = mid - 1;
	}
	return -1;
}

int main(){
	int a[100], n, k;
	FILE *f;
	f = fopen("C:\\Users\\phuon\\OneDrive\\Documents\\baitapc\\linearsearch.txt","r");
	fscanf(f, "%d", &n);
	fscanf(f, "%d", &k);
	for (int i=0; i<=n; i++)
		fscanf(f, "%d", &a[i]);
	printf("vi tri cua k: %d", binarysearch(a,n,k));
}
