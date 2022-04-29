#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	printf("\nKOD  SLOVO  kod  slovo");
	printf("\n______________________");
	char k, c,tmp;
	int i, j, n,m;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar('\n');
		tmp = toupper(k);
		for (j = 1; j <= 1; j++)
		{
			printf("%d    %c     %d     %c", tmp, tmp, k, k);
		}
	}

	while (1)
	{
		printf("\nUnesi n redova i m slova: ");
		scanf("%d%d", &n, &m);
		if (n > 0 && m > 0)
			break;
	}

	printf("\nUnesi slovo: ");
	scanf("\n");
	c = getchar();

	for (i = 1; i <= n; i++)
	{
		putchar('\n');
		for(j=1;j<i;j++)
			putchar('\t');
		putchar('{');
		for (j = 1; j <= m; j++)
		{
			putchar(c);
		}
	}

	for (i = n; i >0; i--)
	{
		putchar('\n');
		for (j = 1; j < i; j++)
			putchar('\t');
		
		for (j = 1; j <= m; j++)
		{
			putchar(c);
		}
		putchar('}');
	}

	/*MOZE I OVAKO za donji deo
	for (i = 1; i <= n; i++)
	{
		putchar('\n');
		for (j = 1; j <= n - i; j++)
			putchar('\t');*/
	
}