#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that draws a diagonal
 *@n: the number of times _ should be printed
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('\');
	}
	_putchar('\n');
}
