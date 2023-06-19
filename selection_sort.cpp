#include<stdio.h>
#include<stdlib.h>
int SelectionSort(int a[], int n){
	int i,j;
	for (i=0; i<n-1; i++){
		int i_min = i;
		int v_min = a[i];
		for (j=i; j<n; j++)
			if (a[j] < v_min){
				i_min = j;
				v_min = a[j];
			}
		a[i_min] = a[i];
		a[i] = v_min;
	
	}
	
}

int main(){
		int a[100], n, i;
		FILE *f;
		f = fopen("C:\\Users\\phuon\\OneDrive\\Documents\\baitapc\\linearsearch.txt", "r");
		fscanf(f, "%d", &n);
		for (i=0; i<n; i++)
			fscanf(f, "%d", &a[i]);
		
		SelectionSort(a,n);
		printf("Sap xep: \n");
		for (i=0; i<n; i++)
			printf("%d ", a[i]);
}
