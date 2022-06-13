#include "main.h"
/**
 * swap_int - function prototype
 * Description - write a function that swaps  the values of two integers
 * @a: pointer to an int
 * @b: pointer to an int
*/
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
