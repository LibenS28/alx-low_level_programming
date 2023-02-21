#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0 (Success)
 */

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

