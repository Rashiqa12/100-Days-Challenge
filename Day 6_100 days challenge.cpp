#include <stdio.h>
main()
{
	long int beli, disc, total;
	printf ("Masukkan pembelian :"),scanf ("%d",&beli);
	if (beli>= 100000)
	{
		disc=0.1*beli;
		total=beli-disc;
	}
	else
	{
		disc=0.05*beli;
		total=beli-disc;
	}
	printf ("Jadi Pembelian adalah : %ld\n",beli);
	printf ("jadi Discount adalah : %ld\n",disc);
	printf ("Jadi Total Pembayaran adalah : %ld\n",total);
}