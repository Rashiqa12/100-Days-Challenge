#include <stdio.h>
int main() {
 int n, i;
 unsigned long long faktorial = 1;
 printf("Masukkan sebuah angka: ");
 scanf("%d", &n);
 for(i = 1; i <= n; ++i) {
 faktorial *= i;
 }
 printf("Faktorial dari %d adalah %llu\n", n, faktorial);

}
