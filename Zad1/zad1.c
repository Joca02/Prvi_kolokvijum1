#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main() {
	int n,i,j;
	char c,znak;

	printf("Unesite karakter: %% @ ili #");
	c = getchar();
	if (c == '#' || c == '@' || c == '%')
		znak = c;
	else
	{
		znak = '*';
	}

	while (1)
	{
		printf("\nUnesite broj n<=20: ");
		scanf("%d", &n);
		if (n > 20)
			continue;
		else
			break;
	}

	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			putchar(' ');
		for (j = 0; j < n; j++)
		{
			putchar(znak);
		}
		putchar('\n');	
	}


}
