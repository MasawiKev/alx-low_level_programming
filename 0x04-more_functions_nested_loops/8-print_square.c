#include "main.h"

/**
 * print_square - print squares with hashes
 * @size: size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
