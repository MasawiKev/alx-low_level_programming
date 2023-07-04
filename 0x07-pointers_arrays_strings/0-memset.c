#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * Return: pointer to the memory
 * @s: starting address
 * @b: the desired value
 * @n: number of bytes to be changed
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
