#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Prints
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar((i % 10) + '0');
	}
}
