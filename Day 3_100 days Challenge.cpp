#include <stdio.h>
int main()
{
	int umurAdit, umurDenis, selisih;
	
	printf("Masukkan umur Adit: ");
	scanf("%d", &umurAdit);
	
	printf("Masukkan umur Denis: ");
	scanf("%d", &umurDenis);
	
	selisih=umurAdit-umurDenis;
	
	printf("Jadi perbedaan umur mereka adalah: %d tahun. \n", selisih);
}