//###############################
//#	Created by Alexis MORTELIER	#
//#		All Rights Reserved		#
//###############################
#include <stdio.h>
int main() {
	float x, y, max;
	printf("Please input x and y:\n");
	scanf_s("%f%f", &x, &y);
	max = x > y ? x : y;
	printf("MAX of (%f,%f) is %f", x, y, max);
}