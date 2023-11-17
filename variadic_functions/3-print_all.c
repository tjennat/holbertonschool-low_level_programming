#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 *           c: char
 *           i: integer
 *           f: float
 *           s: char * (if the string is NULL, print (nil) instead)
 *           Any other char should be ignored.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *str;
    char c;

    va_start(args, format);

    while (format && format[i])
    {
        c = format[i];

        if (i > 0)
            printf(", ");

        if (c == 'c')
        {
            printf("%c", va_arg(args, int));
        }
        else if (c == 'i')
        {
            printf("%d", va_arg(args, int));
        }
        else if (c == 'f')
        {
            printf("%f", va_arg(args, double));
        }
        else if (c == 's')
        {
            str = va_arg(args, char *);
            if (str == NULL)
                printf("(nil)");
            else
                printf("%s", str);
        }

        i++;
    }

    va_end(args);
    printf("\n");
}
