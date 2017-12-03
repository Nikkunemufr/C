//###############################
//#	Created by Alexis MORTELIER	#
//#		All Right Reserved		#
//###############################
#include <stdafx.h>
#include <stdio.h>
#define N 25
int main() {
	int nbPremier[N];
	int countPremier, nbTest, count;

	printf("Les %d premiers nombres premiers:\n", N);
	nbPremier[0] = 2;
	countPremier = 1;
	nbTest = 3;
	while (countPremier<N){
		count = 0;
		while (nbPremier[count] * nbPremier[count] <= nbTest) {
			if (nbTest%nbPremier[count] == 0) {
				nbTest += 2;
				count = 1;
			}
			else
				count++;
		}
		nbPremier[countPremier++] = nbTest;
		nbTest += 2;
	}
	for (count = 0; count<countPremier; count++)
		printf("%4d", nbPremier[count]);
}