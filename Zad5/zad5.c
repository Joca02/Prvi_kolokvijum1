#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main() {
	int n, i, j;
	char c, velC;

	while (1)
	{
		printf("\nUnesi broj redova trougla: ");
		scanf("%d", &n);
		
		if (n <= 10)
			break;
	}
	
	printf("\nUnesi slovo: ");
	//klirujem bafer ili ovako, ili getchar zamenim sa scanf(" %c",&c);
	scanf("\n");
	c = getchar();
	
	
	if (isalpha(c) != 0)
	{
		if (islower(c) != 0)
			velC = toupper(c);
		else
		{
			velC = c;
			c = tolower(c);
		}
	}
	else 
	{
		c = velC = '*';
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n - i; j++)
			putchar(' ');

		for (j = 1; j <= 2 * i - 1; j++)
		{
			if (i % 2 != 0)
				putchar(velC);
			else
				putchar(c);
		}
		putchar('\n');
	}

}