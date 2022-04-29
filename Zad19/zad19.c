#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int i, n,brojac=0;
	printf("\nUnesi ceo deci ili hexideci br: ");
	scanf("%x",&n);

	for (i = 0; i < 32; i++)
	{
		if ((n & 3) == 1 || (n & 3) == 2)
			brojac++;
		n >>= 1;
	}

	printf("\nBroj parova razl vrednosti je: %d", brojac);

}