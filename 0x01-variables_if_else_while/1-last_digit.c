#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
  * main - entry point
  * Return: always 0
*/
int main(void)
{
	int n, l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = (n % 10);
	if (l_digit > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, l_digit);
	else if (l_digit == 0)
		printf("last digit of %d is %d and is 0\n", n, l_digit);
	else if (l_digit < 6)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);
	return (0);
}
