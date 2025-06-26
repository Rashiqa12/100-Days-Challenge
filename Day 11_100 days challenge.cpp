#include<stdio.h>
main()
{
	int n;
	
	printf ("Kelipatan 3: ");
	for (n = 3; n <= 48; n++){
		if (n % 3 == 0){
			printf("%d", n);
			if (n <= 51) printf (", ");
		}	
	}
	
	printf ("\nKelipatan 5: ");
	for (n = 5; n <= 50; n++){
		if (n % 5 == 0){
			printf("%d", n);
			if (n < 51) printf (", ");
		}	
	}
	
	printf ("\n");
}