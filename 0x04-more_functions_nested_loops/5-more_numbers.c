#include "main.h"
/**
  * more_numbers - prints the integers 0 - 14 10x
  *
  * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
