//###############################
//#	Created by Alexis MORTELIER	#
//#		All Rights Reserved		#
//###############################
#include <stdafx.h>
#include <stdio.h>
#define LIGNE 4
#define COLONNE 4
int main() {
	int matrice[LIGNE][COLONNE];
	int i, j;

	printf("Elements de la matrice de taille %d*%d \n", COLONNE, LIGNE);
	for (i = 0; i < LIGNE; i++) {
		for (j = 0; j < COLONNE; j++) {
			scanf_s("%d", &matrice[i][j]);
		}
	}

	printf("Matrice :\n");
	for (i = 0; i < LIGNE; i++) {
		for (j = 0; j < COLONNE; j++) {
			printf("%8d", matrice[j][i]);
		}
		printf("\n");
	}
}