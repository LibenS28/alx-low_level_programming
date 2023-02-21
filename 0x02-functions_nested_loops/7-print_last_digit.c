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

	if (n > 0)
	{
		r = n % 10;
	}
	_putchar('0' + r);
	return (r);
}
