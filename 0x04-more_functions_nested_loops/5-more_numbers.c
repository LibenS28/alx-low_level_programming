#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints from 0 to 14 10 times
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int n, a;

	for (a = 1; a <= 10; a++)
	{
	for (n = 0; n <= 14; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
	}
}
