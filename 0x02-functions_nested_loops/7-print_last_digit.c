#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @n: parameter
 * Return: Void.
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
	r = (n % 10) * -1;
	}

	else if (n > 0)
	{
		r = n % 10;
	}
	else
	{
		r = 0;
	}
	_putchar('0' + r);
	return (r);
}
