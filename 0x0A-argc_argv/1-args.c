#include "main.h"
#include <stdio.h>

/**
  * main - This prints number of arguments passed
  * @argv: the arguments
  * @argc: argument count
  * Return: always 0
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
