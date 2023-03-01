#include "main.h"
/**
 * reverse_array	-	reverse array of integers
 * @a:	array
 * @n: number of elements of array
 *
 * Return:	void
 */

void reverse_array(int *a, int n)
{
	int num, num2;

	for (num1 = 0; num1 < n--; num++)
	{
		num2 = a[num];
		a[num] = a[n];
		a[n] = num2;
	}
}

