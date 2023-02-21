#include "main.h"

/**
 * test_islower - Test the _islower function
 *
 * @c: Number to pass to _islower function
 */
void test_islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
