#include <stddef.h>
#include "function_pointers.h"


/**
 * print_name - printing a name with pointer to a function
 * @name: is the string
 * @f: is my pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
