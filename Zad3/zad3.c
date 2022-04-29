#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int n,i,j;
	char c, velC;
	while (1)
	{
		printf("Unesi broj strana n: ");
		scanf("%d", &n);
		if (n >= 3 && n <= 10)
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
	for (i = 0; i < n; i++)
	{
		//prva iteracija n* (' ') jer je i=0 a j se uvecava ++, sledeca n-1, pa n-2....
		for (j = 0; j<n-i; j ++ )
		{
			putchar(' ');
		}
		for (j= 0;j < n;j++)
		{
			
			if (i == 0 || i == n - 1)
				putchar(velC);
			else if (j == 0 || j == n - 1)
				putchar(velC);
			else
				putchar(c);
		}
		putchar('\n');
	}
	putchar('\n');
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
			putchar(' ');
		for (j = 0; j < n; j++)
		{

			if (i == 0 || i == n - 1)
				putchar(c);
			else if (j == 0 || j == n - 1)
				putchar(c);
			else
				putchar(velC);
		}
		putchar('\n');
	}

}