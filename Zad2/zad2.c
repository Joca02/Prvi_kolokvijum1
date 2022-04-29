#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int n, i, j;
	char c, VelC;

	while (1)
	{
		printf("\nUnesi parni broj manji od 20: ");
		scanf("%d", &n);
		if (n % 2 == 1 || n > 20)
			continue;
		else break;
	}
	printf("\nUnesi slovo: ");
	while (1)
	{

		c = getchar();
		if (isalpha(c) != 0)
			break;
	}
	VelC = toupper(c);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j % 2 == 0)
				putchar(VelC);
			else
				putchar(c);
		}
		putchar('\n');
	}

}