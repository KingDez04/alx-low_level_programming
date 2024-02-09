#include "main.h"

/**
 * get_bit - get bit
 * @n: number
 * @index: index
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val;

	if (index > 64)
		return (-1);
	val = n >> index;

	return (val & 1);
}
