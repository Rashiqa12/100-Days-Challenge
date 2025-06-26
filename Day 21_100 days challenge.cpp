#include <stdio.h>
int main() {
 int num;
 printf("Masukkan angka antara 1 sampai 5: ");
 scanf("%d", &num);
 switch(num) {
 case 1: printf("Satu\n"); break;
 case 2: printf("Dua\n"); break;
 case 3: printf("Tiga\n"); break;
 case 4: printf("Empat\n"); break;
 case 5: printf("Lima\n"); break;
 default: printf("Angka tidak valid\n");
 }
 return 0;
}