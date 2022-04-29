#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int n, m, i, j;
	
	while (1)
	{

		while (1)
		{
			printf("\nUnesi red(n) i kolonu(m): ");
			scanf("%d%d", &n, &m);
			if (n <= 10 && m <= 10)
				break;
		}
		
		for (i = 1; i <= n; i++)
		{
			printf("\n%d", i);
			for (j = 1; j <= m; j++)
			{
				printf("-%d%d", j, i);
			}
		}
	
		if (n > m) break;
		
	}
}