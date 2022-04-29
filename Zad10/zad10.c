#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int n, i, j;
	char c;

	while (1)
	{
		printf("\nUnesi broj n: ");
		scanf("%d", &n);
		if (n <= 15 && n>=5 && n%2!=0)
			break;
	}

	while (1)
	{
		printf("\nUnesi karakter: ");
		scanf("\n");
		c = getchar();
		if (c=='@' || c == '#' || c == '*')
			break;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j==i || i==(n+1)/2 || j== (n + 1) / 2 || j==n-i+1)
				putchar(c);
			else
				putchar(' ');
		}

		putchar('\n');
	}
}