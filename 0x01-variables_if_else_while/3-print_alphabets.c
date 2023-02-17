#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int A, a;

	a = 97;
	A = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (A <= 90)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
