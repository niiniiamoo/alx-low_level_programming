#include "main.h"
/**
  * _isupper - checks for lowercase character
  *
  * @c: The character in ASCII code
  *
  * Return: 1 for uppercase character, 0 for other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
