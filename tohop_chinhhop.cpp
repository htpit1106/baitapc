#include <stdio.h>
#include <math.h>

unsigned long long tinhToHop(int n, int k) {
    unsigned long long toHop = round(pow(n, k) / pow(10, -15)) / round(pow(k, k) / pow(10, -15));
    return toHop;
}

unsigned long long tinhChinhHop(int n, int k) {
    unsigned long long chinhHop = round(pow(n, k) / pow(10, -15));
    return chinhHop;
}

int main() {
    int n, k;
    printf("Nhap vao n va k: ");
    scanf("%d%d", &n, &k);
    if (k > n) {
        printf("Khong the tinh to hop va chinh hop.\n");
    } else {
        unsigned long long toHop = tinhToHop(n, k);
        unsigned long long chinhHop = tinhChinhHop(n, k);
        printf("To hop C(%d, %d) = %llu\n", n, k, toHop);
        printf("Chinh hop P(%d, %d) = %llu\n", n, k, chinhHop);
    }
    return 0;
}

