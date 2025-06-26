#include <stdio.h>

int main() {
    float alas, tinggi, sisi_a, sisi_b, sisi_c;
    float luas, keliling;

    // Input alas dan tinggi untuk luas
    printf("Masukkan alas segitiga: ");
    scanf("%f", &alas);

    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);

    // Input sisi-sisi untuk keliling
    printf("Masukkan sisi a: ");
    scanf("%f", &sisi_a);

    printf("Masukkan sisi b: ");
    scanf("%f", &sisi_b);

    printf("Masukkan sisi c: ");
    scanf("%f", &sisi_c);

    // Hitung luas dan keliling
    luas = 0.5 * alas * tinggi;
    keliling = sisi_a + sisi_b + sisi_c;

    printf("Luas segitiga: %.2f\n", luas);
    printf("Keliling segitiga: %.2f\n", keliling);

    return 0;
}