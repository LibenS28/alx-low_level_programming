#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int a = 97;
int b = 0;

for (; a <= 122 ; a++)
{
_putchar(a);
}
_putchar('\n');
for (; b < 10 ; b++)
{
print_alphabet_x10();
}

}

