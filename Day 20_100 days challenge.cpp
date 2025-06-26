#include <stdio.h>
int main() {
 int num, count = 0;
 printf("Masukkan sebuah angka: ");
 scanf("%d", &num);
 while(num != 0) {
 num /= 10;
 count++;
 }
 printf("Jumlah digit adalah %d\n", count);
 return 0;
}
