#include "main.h"
/**
  * print_sign - determines if the input no.
  * is greater than, less than or equl to 0
  *
  * @n: input as an integer
  *
  * Return: 1 if > '0', 0 if == '0' and -1 if < '0'
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
