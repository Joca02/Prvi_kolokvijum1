#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int i, x, prvoMesto=0, zadnjeMesto;

	printf("\nUnesi ceo broj: ");
	scanf("%x", &x);

	for (i = 0; i < 16; i++)
	{
		if ((x & 5) == 5)
		{
			if (!prvoMesto)
				prvoMesto = i;
			else
				zadnjeMesto = i;
		}
		x >>= 1;
	}
	printf("\nPrvo pojavljivanje kombinacije 101: %d", prvoMesto);
	printf("\nPoslednje pojavljivanje kombinacije 101: %d\n\n", zadnjeMesto);

}