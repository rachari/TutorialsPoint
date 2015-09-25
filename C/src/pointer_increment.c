#include <stdio.h>

const int MAX = 3;

int main(int argc, char const *argv[])
{
	int var[] = {10, 100, 200};
	int i, *ptr;

	ptr = var;
	for (i = 0; i < MAX; i++)
	{
		printf("Address of var[%d] = %x\n", i, ptr);
		printf("Value of var[%d] = %d\n", i, *ptr);

		/* move to next iteration */
		ptr++;
	}
	return 0;
}