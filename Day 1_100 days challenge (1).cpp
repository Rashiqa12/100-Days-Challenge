#include <stdio.h>

int main() {
    int umurA, umurB;
    int selisih = 5; // diketahui selisih umur 5 tahun

    printf("Masukkan umur A: ");
    scanf("%d", &umurA);

    // umur B adalah umur A dikurangi 5
    umurB = umurA - selisih;

    // cek jika umurB valid (umur tidak boleh negatif atau nol)
    if (umurB <= 0) {
        printf("Umur B tidak valid. Umur A harus lebih besar dari %d tahun.\n", selisih);
        return 1;
    }

    // tampilkan umur B
    printf("Umur B adalah: %d tahun\n", umurB);

    // hitung perbandingan
    printf("Perbandingan umur A dan B adalah %d:%d\n", umurA, umurB);

    return 0;
}
