#include<stdio.h>
const int maxN = 100;
int n;
int c[maxN +1][maxN+1];
int x[maxN], kq[maxN],cx[maxN+1];
long Min, cp;
void khoitao()
{
	printf("n = "); scanf("%d",&n);
	int i,j;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++) scanf("%d",&c[i][j]);
	printf("Ma tran \n");
	for (i=1; i<=n; i++)
	{	for (j=1; j<=n; j++) printf("%d ",c[i][j]);
		printf("\n");
	}
	for (i=1;i<=n;i++) cx[i] = 1;
	x[1]=1;cx[1] = 0;
	Min = 100000000; 
}
void capnhat()
{
	int i;
	if (cp + c[x[n]][1] < Min)
	{
		Min = cp + c[x[n]][1];
		for (i=1; i<=n; i++) kq[i] = x[i];
	}
}
void Try(int i)
{
	int j;
	for (j=2;j<=n;j++)
	if (cx[j]==1)
	{
		x[i] = j;
		cp= cp + c[x[i-1]][j];
		cx[j]=0;
		if (i==n) capnhat();
		else  Try(i+1);
		cx[j]= 1;
		cp =cp-c[x[i-1]][j];
	}
}
void inkq()
{
	int i;
	printf("Hanh trinh chi phi nho nhat: \n");
	for (i=1; i<=n; i++) printf("%d --> ",kq[i]);
	printf("1\n");
	printf("Chi phi nho nhat la : %ld \n",Min);
}
int main(){
	khoitao();
	Try(2);
	inkq();
	return 0;
}

