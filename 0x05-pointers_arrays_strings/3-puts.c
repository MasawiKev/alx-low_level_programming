#include "main.h"

/**
 * _puts - this prints a string followed by a new line.
 * @str: string to print
 * Return: Void.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
