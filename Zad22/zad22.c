#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int x, n,y,i,z,brojac=0,pom;
	printf("\nUnesi br u hex: ");
	scanf("%x", &x);
	printf("\nUnesi br n: ");
	scanf("%d", &n);
	y = x;
	

	for (i = 0; i < 32; i++)
	{
		if (i != 0 && i != 1 && i != 2)
			y = y & ~(1 << i);
	}

	printf("\ny je %x", y);

	z = x;
	for (i = 0; i < 32; i++)
	{
		if (i >= n)
			z = z & ~(1 << i);
	}
	printf("\nz je %x\n", z);

	do {
		if (brojac == 0)
			pom = x;
		else if (brojac == 1)
			pom = y;
		else
			pom = z;
		for (i = 15; i >= 0; i--)
		{
			if (i == 11 || i == 7 || i == 3)
				putchar(' ');
			if ((pom >> i) & 1)
				printf("1");
			else
				printf("0");
		}
		brojac++;
		putchar('\n');
	} while (brojac < 3);

}