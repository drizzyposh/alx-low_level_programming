/*
 * File:	6-is_prime_number.c
 * Auth: femi
 */

#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible	-	checks if a number is divisible
 * @num:	the number to be checked
 * @div:	the divisor
 *
 * Return:	if the number is divisble - 0
 * 	if the number is not divisble -1
 */

int is_divisble(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}

