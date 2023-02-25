#include "main.h"
/**
  * _isdigit - checks for lowercase character
  *
  * @c: The character in ASCII code
  *
  * Return: 1 for integer, 0 for other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
