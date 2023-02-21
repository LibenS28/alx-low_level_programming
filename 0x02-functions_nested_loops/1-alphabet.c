#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
int a = 97;

for (; a <= 122 ; a++)
{
_putchar(a);
}
_putchar('\n');
return (0);
}
