#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: array size
 * @cmp: function to use
 *
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
