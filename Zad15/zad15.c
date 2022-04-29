#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	char c;
	int n, m, i, j,k;
	
	do
	{
		printf("\nUnesi znak: ");
		c = getchar();
	} while (isprint(c)==0);

	printf("\nDecimalna vrednost ASCII karaktera: %d", c);

	while (1)
	{
		printf("\nUnesi n kvadrata,m dimenzija: ");
		scanf("%d%d", &n, &m);
		if (n >= 3 && n <= 5 && m >= 3 && m <= 5)
			break;
	}

	//redovi
	for (i = 1; i <= m; i++) 
	{
		//koliko puta se ponavlja ispis
		for (j = 1; j <= n; j++)
		{
			//kolone
			for (k = 1; k <= m; k++)
				putchar(c);
			for (k = 1; k <= m; k++)
				putchar(' ');
		}
		putchar('\n');
	}

}