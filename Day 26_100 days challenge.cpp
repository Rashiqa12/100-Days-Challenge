#include <stdio.h>

int main() {
    int i, j;

    printf("Tabel pertambahan 1 sampai 10:\n");

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%4d", i - j);
        }
        printf("\n");
    }

    return 0;
}