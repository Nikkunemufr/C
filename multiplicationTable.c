//#################################
//#	Created by Alexis MORTELIER	#
//#		All Right Reserved		#
//#################################
#include <stdafx.h>
#include <stdio.h>
void main(void) {
	int x;
	printf("Entre un entier :");
	scanf_s("%d", &x);
	printf("Table de 1 à %d:\n", x);
	int i, j;
	int resultat = 0;
	for (i = 1; i <= x; i++)
		for (j = 1; j <= x; j++) {
			resultat = i * j;
			printf("%d x %d = %2d\n", i, j, resultat);
		}
}
