#include <stdio.h>
int main() {
 int num;
 printf("Masukkan angka antara 1 sampai 5: ");
 scanf("%d", &num);
 switch(num) {
 case 1: printf("mangga\n"); break;
 case 2: printf("apel\n"); break;
 case 3: printf("jeruk\n"); break;
 case 4: printf("pir\n"); break;
 case 5: printf("anggur\n"); break;
 default: printf("Angka tidak valid\n");
 }
 return 0;
}