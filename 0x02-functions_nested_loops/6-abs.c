#include "main.h"

/**
 * _abs - absolute value
 *
 * @n: parameter
 * Return: Void.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
	return (0);
	}
}
