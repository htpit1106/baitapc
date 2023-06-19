#include<stdio.h>
#include<string.h>

int main()
{
    char s[100], w[100]; 
    printf("Nhap xau S: "); gets(s);
    printf("Nhap xau W: "); gets(w);
//    printf("\n%d",strstr(s,w));
//    printf("\n%d",strlen(strstr(s,w)));

    if (strstr(s,w))
        printf("W xuat hien trong S o vi tri %d\n", strlen(s) - strlen(strstr(s,w)));
    else
        printf("W khong xuat hien trong S\n"); 
return 0;
}
