#include <stdio.h>

int main() {
 float radius, luas, pi;
 printf("Masukkan jari-jari lingkaran: ");
 scanf("%f", &radius);
 pi = 3,14;
 luas = pi * radius * radius;
 printf("Luas lingkaran adalah %.2f\n", luas);

}