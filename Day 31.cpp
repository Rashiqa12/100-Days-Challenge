#include <stdio.h>

void tampilGenap(int n) {
    printf("Bilangan Genap:\n");
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");
}

void tampilGanjil(int n) {
    printf("Bilangan Ganjil:\n");
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int batas;

    printf("Masukkan batas angka: ");
    scanf("%d", &batas);

    tampilGenap(batas);
    tampilGanjil(batas);

    return 0;
}
