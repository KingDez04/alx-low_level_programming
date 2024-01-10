#include "main.h"

/**
 * factorial - returns factorial
 * @n: number
 *
 * Return: n factorial
 */
int factorial(int n)
{
	int fact;

	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	fact = n * factorial(n - 1);

	return (fact);
}
