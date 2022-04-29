#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	//PRVI ZADATAK

	/*int x,i,pom,brojac=0,temp,suma = 0;
	float srvr;
	printf("\nUnesite ceo broj: ");
	scanf("%x", &x);
	printf("\nDeci oblik %d hexa oblik %X", x, x);
	temp = x;
	while (temp)
	{
		brojac++;
		pom = temp % 10;
		suma += pom;
		temp /= 10;

	}
	srvr = (float)suma / brojac;
	printf("\n Broj cifara je %d a njihova srednja vrednost je %f", brojac, srvr);

	for(i=1;i<=4;i++){
		if (x&(1 << i * 8))
			x = x | (0xff << i * 8);
		else
			x = x & ~(0xff << i * 8);
	}

	printf("\n");
	for (i = 31; i >= 0; i--)
	{
		if (i == 7 || i == 15 || i == 23)
			printf(" ");
		if ((x >> i) & 1)
			printf("1");
		else
			printf("0");
	}*/

	//ZADATAK 2

	/*int n,i,j,brojac=0;
	char c;
	while (1)
	{
		printf("\nUnesi znak: ");
		c = getchar();
		if (isprint(c))
			break;
	}

	while (1)
	{
		printf("\nUnesi n: ");
		scanf("%d", &n);
		if (n >= 1 && n <= 5)
			break;
	}

	printf("\nZnak je: %c  a njegov ASCII kod je %d", c, c);

	for (i = 1; i <= n; i++)
	{
		printf("\n");
		while (brojac < n) {
			for (j = 1; j <= n; j++)
			{
				putchar(c);
			}
			printf("\t");
			brojac++;
		}
		brojac = 0;
		
	}*/

	//ZADATAK 3
	/*int velS = 0, maloS = 0,brojac=0;
	char c,znak='\0';
	while ((c = getchar()) != EOF)
	{
		if (c == '.' || c == ';')
			break;
		brojac++;
			if (isupper(c))
				velS++;
			else if (islower(c))
				maloS++;
			if (c != znak)
				putchar(c);
			znak = c;

		
		
	}
	if (velS == maloS)
		printf("\nProgram ima jednak broj velikih i malih slova!");
	if(maloS+velS==brojac)
		printf("\nProgram ima samo slova!");*/
}