#include "main.h"

/**
 * _puts - Prints
 * @str: Variable
 *
 * Return: Var
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
