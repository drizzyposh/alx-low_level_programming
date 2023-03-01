#include "main.h"
/**
 * _strcmp	-	compare string values
 * @s1:	input value
 * @s2:	input value
 *
 * Return:	s1[num]	-	s2[num]
 */
int _strcmp(char *s1, char *s2)
{
	int num;

	num = 0;
	while (s1[num] != '\0' && s2[num] != '\0')
	{
		if (s1[num] != s2[num])
		{
			return (s1[num] - s2[num]);
		}
		num++;
	}
	return (0);
}
