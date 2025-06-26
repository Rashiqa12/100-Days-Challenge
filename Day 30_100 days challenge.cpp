#include <stdio.h>

int main() {
    int i, j;
    int angka = 1;

    printf("Tabel 3x4 sederhana:\n");

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 4; j++) {
            printf("%4d", angka);
            angka++;
        }
        printf("\n");
    }

    return 0;
}