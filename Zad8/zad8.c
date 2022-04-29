#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int n, i, j;
	char c,velC;
	while (1)
	{
		printf("\nUnesi duzinu stranice deltoida: ");
		scanf("%d", &n);
		if (n <= 15 && n >= 2)
			break;
	}
	printf("Unesi slovo: ");
	while (1)
	{
		c = getchar();
		if (isalpha(c) != 0)
			break;
	}
	velC = toupper(c);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			putchar(' ');
		for (j = 1; j <= 2*i-1; j++)
		{
			if(j==1 || j==2*i-1)
			putchar(velC);
			else
			{
				putchar(c);
			}
		}
		putchar('\n');
	}

	for (i = n - 1; i > 0; i--)
	{
		for (j = 1; j <= n - i; j++)
			putchar(' ');
		for(j=1;j<=2*i-1;j++)
			if(j==1 || j==2*i-1)
			putchar(velC);
			else
			{
				putchar(c);
			}

		putchar('\n');
	}
}