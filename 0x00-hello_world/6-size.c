#include <stdio.h>
/**
 * main	-	Entry
 * Return:	Always	0
 */
int main(void)
{
	printf("Size of a char: %i bytes(s)\n", sizeof(char));
	print("Size of an int: %i bytes(s)\n", sizeof(int));
	printf("Size of an long int: %i bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %i bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %i bytes(s)\n", sizeof(float));
	return (0);
}

