#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number
 * @index: index of the bit to clear
 *
 * Return: 1 for success and -1 for fail.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (indec > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
