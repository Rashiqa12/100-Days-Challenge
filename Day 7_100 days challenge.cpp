#include <stdio.h>
main()
{
	float Volume, Luas, Phi, r;
	Phi = 3.14;
	
	printf ("Masukkan r :"); scanf("%f",&r);
	
	Volume = (4.0/3.0) * Phi * r * r * r;
	Luas = 4 * Phi * r * r;

	printf ("Jadi Volumenya adalah : %f\n",Volume);
	printf ("Jadi Luasnya adalah : %f\n",Luas);
}