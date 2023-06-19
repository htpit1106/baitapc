#include<iostream>
using namespace std;
int n, dem, x[20];
bool a[20],b[40], c[40];
void khoitao()
{
	cout<<"Nhap n= "; cin>>n;
	for (int i=1; i<=n; i++) a[i] = true;
	for (int i=1; i<= 2*n;i++) b[i] = true;
	for (int i=1; i<= 2*n-1; i++) c[i] = true;
	//dich chi so mang c tu [1-n, n-1]
	// thanh [1;2n-1]
	dem=0;
}

void xuat()
{
	dem++;
	cout<<dem<<".";
	for (int i=1; i<=n; i++)
		cout<<x[i];
	cout<<endl;
	
}
void hau(int i)
{
	for (int j=1; j<=n; j++)
	if (a[j] and b[i+j] and c[i-j+n])
	{
		x[i] = j;
		a[j] = false;
		b[i+j] = false;
		c[i-j+n] = false;
		if (i==n) xuat();
		else hau(i+1);
		a[j]= true;
		b[i+j] = true;
		c[i-j+n] = true;
	}
}

int main()
{
	khoitao();
	hau(1);
}
