#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers.
 * @a: the first integer to be swapped.
 * @b:the second integer to be swapped.
 *
 * Return: noting
 */

void swap_int(int *a, int *b)
/* the funtion that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
