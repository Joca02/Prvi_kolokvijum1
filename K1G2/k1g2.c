#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main()
{
	//ZADATAK 1

	int x, temp, provera, broj0 = 0, prvaNul = 0, zadnjaNul = 0, brojac = 0, pom;
	printf("\nUnesi nenegativan broj: ");
	scanf("%d", &x);
	printf("Deci vrednost: %d Hex vrednost: %X", x, x);
	temp = x;
	while (temp)
	{
		brojac++;
		provera = temp % 10;
		if (provera == 0) {
			broj0++;
			if (!prvaNul)
				prvaNul = brojac;
			else
				zadnjaNul = brojac;

		}
		temp /= 10;

	}

	printf("\nU broju se nalazi %d nule, prva je na %d. a druga na %d. mestu", broj0, prvaNul, zadnjaNul);
	temp = x;
	pom = x;
	if (!(x & 1))
	{
		pom = (x & 0xff) << 8;
		temp = (x >> 8) & 0xff;
		x = pom | temp;

		/*temp = (x & 0xff) << 8;
		x = temp | (x >> 8);*/
	}
	printf("\n%x", x);

	


}