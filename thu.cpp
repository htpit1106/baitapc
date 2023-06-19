#include <stdio.h>
#include <string.h>

int dem;
char s[100], hv[100];
int dd[100];

void khoitao()
{
    printf("Nhap tu: ");
    fgets(s, 100, stdin);
    int i;
    for (i = 0; i < strlen(s) - 1; i++) dd[i] = 0;
    dem = 0;
}

void xuat()
{
    dem++;
    printf("%d.%s\n", dem, hv);
}

void Try(int i)
{
    int j;
    for (j = 0; j < strlen(s) - 1; j++)
        if (dd[j] == 0)
        {
            hv[i] = s[j];
            dd[j] = 1;
            if (i == strlen(s) - 2) xuat();
            else Try(i + 1);
            dd[j] = 0;
        }
}

int main()
{
    khoitao();
    Try(0);
    return 0;
}

