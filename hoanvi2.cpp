#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *word, int start, int end) {
    if (start == end) {
        printf("%s\n", word);
    }
    else {
        for (int i = start; i <= end; i++) {
            swap(&word[start], &word[i]);
            permute(word, start + 1, end);
            swap(&word[start], &word[i]);
        }
    }
}

int main() {
    char word[50];

    printf("Nh?p t? c?n ho�n v?: ");
    scanf("%s", word);

    int n = strlen(word);
    printf("C�c t? m?i ��?c t?o ra t? ho�n v? c�c k� t? c?a t? %s l�:\n", word);
    permute(word, 0, n-1);

    return 0;
}

