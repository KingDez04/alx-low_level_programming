#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: person name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
