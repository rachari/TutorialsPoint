#include <stdio.h>

/* Example of constants using const keyword */

int main()
{
	// It's a good programming practice to define constants in CAPITALS
	const int LENGTH = 10;
	const int WIDTH = 5;
	const char NEWLINE = '\n';
	int area;

	area = LENGTH * WIDTH;
	printf("Value of area : %d", area);
	printf("%c", NEWLINE);

	return 0;
}
