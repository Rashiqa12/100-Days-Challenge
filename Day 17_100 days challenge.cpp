#include <stdio.h>
int main() {
 int pilihan;
 printf("Pilih angka antara 1 sampai 3: ");
 scanf("%d", &pilihan);
 switch(pilihan) {
 case 1:
 printf("Kamu memilih angka 1\n");
 break;
 case 2:
 printf("Kamu memilih angka 2\n");
 break;
 case 3:
 printf("Kamu memilih angka 3\n");
 break;
 default:
 printf("Pilihan tidak valid\n");
 }
}