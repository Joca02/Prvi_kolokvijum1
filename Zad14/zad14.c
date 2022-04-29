#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int i, j, n;
	while (1)
	{
		printf("\nUnesi broj n: ");
		scanf("%d", &n);
		if (n <= 0 || n > 10)
			break;

		for (i = n+1; i>0; i--)
		{
			if (i == n + 1)
			{
				for (j = 1; j <= n; j++)
				{
					printf(" %d ", j);
				}
			}
			else
			{
				for (j = n; j >0; j--)
				{
					printf(" %d%d", j, i);
				}
			}
			putchar('\n');
		}

	}
}