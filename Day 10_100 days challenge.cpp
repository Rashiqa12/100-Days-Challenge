#include <stdio.h>
main()
{
	char nama[20];
	int umur, tinggi;
	
	printf ("Masukkan nama:"); scanf ("%s", nama);
	printf ("Masukkan umur:"); scanf ("%d", &umur);
	printf ("Masukkan tinggi:"); scanf ("%d", &tinggi);
	
	printf ("Halo nama saya %s, umur saya %d tahun dan tinggi saya %d cm. \n", nama, umur, tinggi);
}