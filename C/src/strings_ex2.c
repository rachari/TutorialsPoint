#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];

	int len;

	/* copy str1 into str3 */
	strcpy(str3, str1);
	printf("strcpy(str3, str1): %s\n", str3);

	/* concatenate str1 and str2 */
	strcat(str1, str2);
	printf("strcat(str1, str2): %s\n", str1);

	/* total length of str1 after concatenation */
	len = strlen(str1);
	printf("strlen(str1): %d\n", len);

	return 0;
}