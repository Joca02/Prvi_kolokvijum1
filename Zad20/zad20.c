#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int i, n,brojac=0,sredina1_1,prva=0,poslednja=0,pom;
	printf("\nUnesi deci il hex br: ");
	scanf("%i", &n);
	pom = n;
	

	for (i = 0; i < 2; i++)
	{
		if ((n & 15) == 10)
		{
			brojac++;
			n >>= 4;
			if ((n & 15) == 10)
				continue;
			else
				break;
		}
		
		else if ((n & 15) == 5)
		{
			brojac++;
			n >>= 4;
			if ((n & 15) == 5)
				continue;
			else
				break;
		}		
	}
	if (brojac == 2)
		printf("Binarni oblik je testerast");
	else
		printf("Binarni oblik nije testerast");

	brojac = 0;
	for (i = 0; i < 8; i++)
	{
		if (pom & (1 << i)) {
			brojac++;
			if (!prva)
				prva = i+1;
			else 
				poslednja = i+1;
		}
	}
	sredina1_1 = poslednja - prva - 1;

	printf("\nPrva jedinica se nalazi na %dom mestu a zadnja na %dom mestu",prva,poslednja);
	printf("\nRazmak izmedju njih je %d, a ima %d jedinica",sredina1_1,brojac);
}
