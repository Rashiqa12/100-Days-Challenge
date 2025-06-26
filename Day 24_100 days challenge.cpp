#include <stdio.h>

int main() {
    int i, j;

    printf("Tabel perkalian dari 10 ke 1:\n");

    for (i = 10; i >= 1; i--) {
        for (j = 10; j >= 1; j--) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}