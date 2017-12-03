//#################################
//#	Created by Alexis MORTELIER	#
//#		All Right Reserved		#
//#################################
#include <stdafx.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
int nb[] = { 112,20,656 };
int base[] = { 2,10,16 };

int palindrome(int nb, int base) {
	int quotient = 0, reste = nb;
	while (reste) {
		quotient = quotient*base + reste%base;
		reste /= base;
	}
	return quotient == base;
}

int main() {
	int i, j;
	for (i = 0; i < sizeof(nb) / sizeof(nb[0]); i++)
		for (j = 0; j < sizeof(base) / sizeof(base[0]); j++)
			if (palindrome(nb[i], base[j]))
				printf("%d -> (%d) est un palindrome\n", nb[i], base[j]);
			else
				printf("%d -> (%d) n'est pas un palindrome\n", nb[i], base[j]);
}