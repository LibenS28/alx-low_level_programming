#include "main.h"
#include <stdio.h>
/*
 * print_to_98 - prints upto 98
 *
 * @n: parameter
 *
 */

void print_to_98(int n)
{
	int num;

	if (n < 98)
	{
		for (num = n; num <= 98; i++)
		{
			if (num != n)
			{
				printf(", ");
			}
			printf("%d", num);
		}
	}
	else
	{
		for (num = n; i >= 98 ; i--)
		{
			if (num != n)
			{
				printf(", ");
			}
			printf("%d", num);
		}
	}
	putchar('\n');
}
