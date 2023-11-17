#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - fct print only char
 * @list: args from
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - fct print only int
 * @list: args from
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - fct print only float
 * @list: args from
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - fct print only string
 * @list: args from
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char*);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - function that prints anything.
 * @format: what type to print
 */
void print_all(const char * const format, ...)
{
	int index1 = 0;
	int index2 = 0;
	char *str = "";

	va_list list;

	checker storage[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{'\0', NULL}
	};

	va_start(list, format);

	while (format != NULL && format[index1] != '\0')
	{
		while (index2 < 4)
		{
			if (format[index1] == *storage[index2].type)
			{
				printf("%s", str);
				storage[index2].function(list);
				str = ", ";
			}
			index2++;
		}
		index1++;
		index2 = 0;
	}
	printf("\n");

	va_end(list);
}
