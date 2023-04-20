#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: all types of arguments
 * Return: always 0
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *com = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", com, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", com, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", com, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", com, str);
					break;
				default:
					i++;
					continue;
			}
			com = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
