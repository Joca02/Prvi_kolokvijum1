#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int x,prva=0,zadnja,i,n;
	printf("\nUnesi broj u hex obliku: ");
	scanf("%x", &x);

	printf("\nUnesi broj bita koji se konvertuje: ");
	scanf("%d", &n);

	for (i = 1; i<= 8; i++)
	{
		if (x & (1 << i - 1))
		{
			if (!prva)
				prva = i;
			else
				zadnja = i;
		}
	}
	
	printf("\nPrvo pojavljivanje jedinice je na %d mestu a drugo na %d mestu", prva, zadnja);

	x ^= 1 << (n - 1); /*koristi operator ^ za izmenu vrednosti*/

	printf("\nSvi bajtovi (od najnizeg) izmenjenog broja:");
	for (i = 0; i < 4; i++) /*prikaz jednog po jednog od 4 bajta*/
		printf("\n%d. bajt: %x", i + 1, (x >> (i * 8)) & 0xff);
}