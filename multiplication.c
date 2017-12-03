//###############################
//#	Created by Alexis MORTELIER	#
//#		All Rights Reserved		#
//###############################
#include <stdio.h>
int main() {
	int x, y, m;
	printf("Please input x and y\n");
	scanf_s("%d%d", &x, &y);
	m = x*y;
	printf("%d * %d = %d\n", x, y, m);
}