#include "main.h"
#include <stdio.h>
/**
 * print_line - a function that draws a straight line
 *@n: the number of times _ should be printed
 * Return: Always 0.
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
