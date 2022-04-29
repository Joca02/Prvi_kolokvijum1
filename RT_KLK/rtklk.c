#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	//ZADATAK 1
	
	//int x, n, brojac = 0, pom, temp, i, prvaJed = 0, poslednji=0;

	//while (1)
	//{
	//	printf("\nUnesi ceo broj: ");
	//	scanf("%x", &x);
	//	if (x > 0)
	//		break;
	//}

	//printf("\nDeci oblik: %d hexa oblik: %X", x, x);

	//while (1)
	//{
	//	printf("\nUnesi n: ");
	//	scanf("%x", &n);
	//	if (n >= 1 && n <= 5)
	//		break;
	//}
	//pom = x;
	//while (pom)
	//{
	//	temp = pom % 10;
	//	brojac++;
	//	pom /= 10;
	//}
	//if (brojac <= n)
	//	printf("\nX ima do n cifara");
	//else
	//	printf("\nX ima vise od n cifara");
	//brojac = 0;
	//printf("\n");
	//for (i = 7; i >= 0; i--)
	//{
	//	if (i == 3)
	//		printf(" ");
	//	if ((x >> i) & 1) {
	//		brojac++;
	//		printf("1");
	//	}
	//	else
	//		printf("0");
	//}
	//if (brojac <= n)
	//	printf("\nJedinica ima do n cifara");
	//else
	//	printf("\nJedinica ima vise od n cifara");

	//for (i = 0; i < 8; i++)
	//{
	//	if (x & (1 << i)) {
	//		if (!prvaJed)
	//			prvaJed = i+1;
	//		else
	//		{
	//			poslednji = i+1;
	//		}

	//	}
	//	
	//}
	//printf("\nLokacija prve jedinice je %d a poslednja %d", prvaJed, poslednji);

	//ZADATAK 2

	int c;
	int n,i,j;
	printf("\nUnesi karakter: ");
	c = getchar();
	printf("Unesi broj n: ");
	scanf("%d", &n);
	
	if (n % 2 == 0 && n <= 12 && n >= 4) {
		for (i = 0; i < n; i++)
		{
			
			for (j = 0; j < n - i-1; j++)
				putchar(' ');
			
			for (j = 0; j < n; j++)
			{
				putchar(c);
			}
			putchar('\n');
		}
	}
}