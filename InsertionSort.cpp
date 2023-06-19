#include<stdio.h>
#include<stdlib.h>
int InsertionSort(int a[], int n)
{
	int i, j, t;
	for (i=1; i<n; i++){
		j=i;
		while(j>=1 && a[j] < a[j-1]){
			t = a[j];
			a[j] = a[j-1];
			a[j-1] = t;
			
			j = j-1;
		}
	}
}

int InsertionSort2(int a[], int n){
	int i,j,key;
	for (i=1; i<n; i++){
		key = a[i];
		j =  i-1;
		while (j>=0 && a[j] > key){
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1]= key;
		
	}
} 
int main(){
	int a[100], n;
	int i;
	FILE *f;
	f = fopen("C:\\Users\\phuon\\OneDrive\\Documents\\baitapc\\linearsearch.txt","r");
	fscanf(f,"%d",&n);
	for (i=0; i<n; i++)
		fscanf(f, "%d", &a[i]);
	InsertionSort2(a,n);
	for (i=0; i<n; i++) printf("%d	",a[i]);
	
}
