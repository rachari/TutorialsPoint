#include <stdio.h>

const int MAX = 3;

int main(int argc, char const *argv[])
{
	int var[] = {10, 100, 200};
	int i, *ptr[MAX];

	for (i = 0; i < MAX; i++)
	{
		ptr[i] = &var[i]; /* assign the address of integer */
		printf("Value of var[%d] = %d\n", i, *ptr[i]);
	}
	return 0;
}