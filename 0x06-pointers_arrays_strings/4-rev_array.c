#include "main.h"
/**
 * reverse_array	-	reverse array of integers
 * @a:	array
 * @n: number of elements of array
 *
 * Return:	void
 */

int reverse_array(char *a, int n)
{
	int num1, num2;

	for (num1 = 0; num1 < n--; num++)
	{
		num2 = a[num];
		a[num] = a[n];
		a[n] = num2;
	}
}

