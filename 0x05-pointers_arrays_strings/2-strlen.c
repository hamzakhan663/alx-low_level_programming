#include "main.h"

/**
 * _strlen - Returns Length
 * @s: Variable
 *
 * Return: Lenght
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
