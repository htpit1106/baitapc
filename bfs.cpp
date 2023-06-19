#include<stdio.h>
#include <cstdio>
#include <stdlib.h>
const char ginp[]="NEW.INP";
int a[101][101];
int n, cx[101], Q[101],v, s;
char m[26] = {'a','b','c','d','e','g','h','i','k','l','m','n','o','p','q','r','s','s','t','u','v','w','x','y','z'} ;
void init()
{ 
	FILE *f;
	int i,j; 
	
	f = fopen("C:\\NEW.INP","r"); //Mo tep de doc du lieu vao
	fscanf(f,"%d", &n);
	
	for ( i=1; i<=n; i++)
	for ( j=1; j<=n; j++) fscanf(f,"%d", &a[i][j]);
	
	//in ma tran ke
	printf("So dinh: %d\n",n);
	printf("Ma tran ke cua do thi:\n");
	for ( i=1; i<=n; i++)
	{ 
		for ( j=1; j<=n; j++) printf("%d ",a[i][j]);
		printf("\n");
	}
}

void BFS(int u)
{
	int j;
	int v, dau = 1, cuoi = 1;
	Q[cuoi] = u; cx[u] = 1;
	while (dau <= cuoi)
	{ 
		v=Q[dau]; dau++;
		printf("%c ",m[v-1]);
		for (j=1; j<=n; j++)
		if (a[v][j]==1 && cx[j]==0) {
			cuoi++; 
			Q[cuoi] = j; 
			cx[j] = 1; 
		}
	}
}
int main()
{
	int i;
	init();
	s=1; //dinh bat dau
	
	//Khoi tao các dinh deu chua tham
	for (i = 1; i <= n; i++) cx[i] = 0;
	printf("Duyet theo chieu rong bat dau tu dinh %d : \n",s);
	BFS(s);
	return 0;
}
