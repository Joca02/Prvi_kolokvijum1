#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	int n, m,i,j;
	char c = '*';
	while (1)
	{
		printf("\nUnesi redove strelice (n): ");
		scanf("%d", &n);
		if (n <= 10)
			break;
	}
	while (1)
	{
		printf("\nUnesi drsku strelice (m): ");
		scanf("%d", &m);
		if (m <= 10)
			break;
	}

	//uspravna strelica

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <=n-i; j++)
		{
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			putchar(c);
		}
		putchar('\n');
	}

	for (i = 0; i < m; i++)
	{

	// j<n-1 zbog crteza kako bi se nasao u sredini
		for (j = 0; j < n  - 1; j++)
			putchar(' ');
		
	//ako je j=i kao sto i jeste stavlja se po karakter | inkrementom se ne podrzava uslov
		for(j=i;j<=i;j++)
			putchar(c);
		putchar('\n');
	}
	putchar('\n');
	 
	//strelica ka dole

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n - 1; j++)
			putchar(' ');
		for (j = i; j <= i; j++)
			putchar(c);
		putchar('\n');
	}

	//n=3 -> i ima 3 iteracije
	for (i = n; i >0; i--)
	{
	
	//j=3, dok je j> trenutne iteracije 'i' | dekrement zbog cega imamo vise ' ' ka dole
		for (j = n ; j > i; j--)
			putchar(' ');

	//dok je j<5 stampa znakove | 5 zavisi od iteracije 'i'
		for (j=0;j<2*i-1;j++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}