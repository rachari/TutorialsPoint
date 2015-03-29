#include <stdio.h>

/* In C programming, when static is used on a class data member, 
 * it causes only one copy of that member to be shared by all objects of its class. */

/* function declaration */

void func(void);

static int count = 5; /* global variable */

int main()
{
	while(count--)
	{
		func();
	}

	return 0;
}

void func(void)
{
	static int i = 5; /* local static variable */
	i++;

	printf("i is %d and count is %d\n", i, count);
}
