#include "main.h"

/**
  * _length - This hecks the length of a string
  * @s: the string
  * Return: return the lenth of the string
  */

int _length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _length(s + 1));
}

/**
  * checkp - It checks if string is palindrome
  * @i: index
  * @lg: length of string
  * @s: is the string given
  * Return: 1 if its palindrome or 0 if not
  */

int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
	}
	return (1);
}

/**
  * is_palindrome - checks if a string is a palindrome
  * @s: the string
  * Return: 1 if true 0 if false
  */

int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}
