#include <stdio.h>

/**
 * main - This prints the alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
		putchar(za);

	putchar('\n');
	return (0);
}
