#include <stdio.h>
#include <limits.h>
#include <float.h>

/* An example that shows the size & limits of different data types in C */

int main() {

	printf("Storage size for int : %d\n", sizeof(int));
	printf("Storage size for float : %d\n", sizeof(float));
	printf("Minimum float positive value: %E\n", FLT_MIN );
	printf("Maximum float positive value: %E\n", FLT_MAX );
	printf("Precision value: %d\n", FLT_DIG );
   
	return 0;
}
