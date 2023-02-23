#include "main.h"
/**
  * _isalpha - checks if  input is a letter
  *
  * @c: The character in ASCII code
  *
  * Return: 1 for letters and 0 for other cases
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
