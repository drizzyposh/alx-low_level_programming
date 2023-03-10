#include "main.h"
/**
 * strcat	-	concatenates the string pointed to by @src, including the x
 * @dest:	A pointer to the string to be concatenated upon.
 * @src:	The source string to be appended to @dest.
 * Return:	A pointed to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int num;
	int num2;

	num = 0;
	while (dest[num] != '\0')
	{
		num++;
	}
	num2 = 0;
	while (src[num2] != '\0')
	{
		dest[num] = src[num2];
		num++;
		num2++;
	}

	dest[num] = '\0';
	return (dest);
}
