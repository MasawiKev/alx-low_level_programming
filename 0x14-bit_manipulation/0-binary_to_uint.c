#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uni;
	int len, btwo;

	if (!b)
		return (0);

	uni = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, btwo = 1; len >= 0; len--, btwo *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			uni += btwo;
		}
	}

	return (uni);
}
