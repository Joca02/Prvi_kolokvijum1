#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	printf("\n10   8   16   znak ");
	printf("\n____________________");
	char k,c;
	int i,j,n;

	for (k = '!'; k <= '@'; k++)
	{
		putchar('\n');
		for (j = 0; j < 1; j++) {
			printf("%d   %o   %X   %c", k, k, k,k);
		}	
	}

	do
	{
		printf("\nUnesi dimenzije n: ");
		scanf("%d", &n);
	} while (n>20 || n<3);
	
	while (1)
	{
		
		printf("\nUnesite znak iz tabele: ");
		scanf("\n");
		c = getchar();
		if (c >= '!' && c <= '@')
			break;
	}

	for (i = 1; i <= n; i++)
	{
		putchar('\n');
		for (j = 1; j <= n; j++)
		{
			if (j == 1 || j == n || i == n)
				putchar(c);
			else
				putchar(' ');
		}
	}
}