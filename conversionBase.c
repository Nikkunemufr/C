#include <stdafx.h>
#include <stdio.h>
#include <string.h>
#define M sizeof(unsigned int)*8
int trans(unsigned num, int base, char numConvertie[]) {
	static char nbHexa[] = "0123456789ABCDEF";
	char temp[M + 1];
	int j, i = M;
	if (base < 2 || base>16) {
		numConvertie[0] = '\0';
		return 0;
	}
	temp[i] = '\0';
	do {
		temp[--i] = nbHexa[num%base];
		num /= base;
	} while (num);
	for (j = 0; numConvertie[j] = temp[i]; j++, i++);
	return j;
}
int main() {
	unsigned int num = 777;
	int base[] = { 2,3,10,16 };
	char numConvertie[33];
	for (int i = 0; i < sizeof(base) / sizeof(base[0]); i++) {
		if (trans(num, base[i], numConvertie))
			printf("%5d = %s(%d)\n", num, numConvertie, base[i]);
	}
}