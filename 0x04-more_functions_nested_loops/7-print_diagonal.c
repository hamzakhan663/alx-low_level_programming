#include "main.h"

/**
 * print_diagonal - Prints
 * @n: Var
 */
void print_diagonal(int n)
{
	int dline;
	int space;

	if (n > 0)
	{
		for (dline = 0; dline < n; dline++)
		{
			for (space = 0; space < dline; space++)
				_putchar(' ');
		_putchar('\\');

		if (dline == n - 1)
			continue;

		_putchar('\n');
		}
	}

	_putchar('\n');
}
