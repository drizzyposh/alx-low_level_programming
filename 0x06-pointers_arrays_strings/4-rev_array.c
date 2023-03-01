#include "main.h"                                                                                                                    
                                                                                                                                     
/**                                                                                                                                  
 * _strcmp - Compares pointers to two strings.                                                                                       
 * @s1: A pointer to the first string to be compared.                                                                                
 * @s2: A pointer to the second string to be compared.                                                                               
 *                                                                                                                                   
 * Return: If str1 < str2, the negative difference of the first unmatched char                                                       
 *         If str1 == str2, 0.                                                                                                       
 *         If str1 > str2, the positive difference of the first unmatched char                                                       
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

