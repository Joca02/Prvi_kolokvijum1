#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int x, n,y,z,i,tmp,brojac=0;
	printf("\nUnesi br u hex: ");
	scanf("%x", &x);
	printf("\nUnesi br n: ");
	scanf("%d", &n);
	y = x;
	for (i = 0; i < 32; i++)
	{
		if (i <= 3)
			y = y ^ (1 << i);
		else
			y = y & ~(1 << i);
	}
	printf("\nVrednost y je %x", y);
	
	z = x;
	for (i = 0; i < 32; i++)
	{
		if (i <n)
			z = z ^ (1 << i);
		else
			z = z & ~(1 << i);
	}
	printf("\nVrednost z je %x", z);

	while (1) {
		if (brojac == 0)
			tmp = x;
		else if (brojac == 1)
			tmp = y;
		else
			tmp = z;
		putchar('\n');
		for (i = 31; i >= 0; i--)
		{
			if (i == 23 || i == 15 || i == 7)
				putchar(' ');
			if ((tmp >> i) & 1)
				printf("1");
			else
				printf("0");
		}
		
		brojac++;
		if (brojac == 3)
			break;
	}
}