#include "main.h"

/**
 * print_alphabet_x10 - func
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{
int m = 0;
while (m < 10)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
m++;
}
}
