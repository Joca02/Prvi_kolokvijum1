#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int n, i, j,brojac=0;
	char c;

	while (1)
	{
		printf("\nUnesi broj n: ");
		scanf("%d", &n);
		if (n <= 12)
			break;
	}
	
	while (1)
	{
		printf("\nUnesi karakter: ");
		scanf("\n");
		c = getchar();
		if (isalpha(c) != 0)
			break;
	}

	while (brojac < 2)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i; j <= n; j++)
				putchar(' ');
			for (j = 1; j <= 2 * i - 1; j++)
				putchar(c);
			putchar('\n');
		}
		brojac++;
	}

	for (i = 1; i <= 2; i++)
	{
		for (j = 1; j <= n ; j++)
			putchar(' ');

		for (j = i-1; j < i; j++);
		putchar(c);
		putchar('\n');
	}

}