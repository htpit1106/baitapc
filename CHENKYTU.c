#include<stdio.h>
#include<string.h>

int main() {
    char s[1000], w[1000];
    int i,p,q;

    printf("Nhap W = "); gets(w);
    printf("Nhap S = "); gets(s);
    printf("P = "); scanf("%d",&p);
    printf("Q = "); scanf("%d",&q);

    if (p > strlen(w) || q > strlen(w)) {
        return 0;
    } else {
        printf("Ket qua: ");
        for ( i=0; i<strlen(w); i++) {
            if (i == p && i == q) {
                printf("%s",s);
                printf("%s",s);
                printf("%c",w[i]);
            } else if (i == p || i == q) {
                printf("%s",s);
                printf("%c",w[i]);
            } else {
                printf("%c",w[i]);
            }
        }
        return 0;
    }
}
