#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list mym;
	int i = 0;
	char *str, *sep = "";

	va_start(mym, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(mym, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(mym, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(mym, double));
					break;
				case 's':
					str = va_arg(mym, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(mym);
}
