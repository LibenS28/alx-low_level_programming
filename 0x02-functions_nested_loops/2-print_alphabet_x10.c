#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_x10(void)
{
int a = 0;

while (a < 10)
{
char w = 'a';

while (w <= 'z')
{
_putchar(w);
w++;
}
_putchar('\n');
a++;
}

}

