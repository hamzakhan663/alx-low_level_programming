#include "main.h"

/**
 * swap_int - Swap Values
 * @a: Variable
 * @b: Variable
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
