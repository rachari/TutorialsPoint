#include <stdio.h>

/* The extern storage class is used to give a reference of a global 
 * variable that is visible to ALL the program files.
 *
 *
 * The extern modifier is most commonly used when there are 
 * two or more files sharing the same global variables or functions.
 *
 * To compile:- gcc extern_storageclass.c extern_support.c -o outfile
 */

int count;
extern void write_extern();

int main()
{
	count = 5;
	write_extern();

	return 0;
}
