#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - print the arguments
 *
 * Description: function that produces output according to a format.
 * @format: pointer to the handled formats
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, n = 0;
  	unsigned int i2;
	char *c;
	va_list pa;

	va_start(pa, format);
	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			putchar(*format);
			n++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					i = va_arg(pa, int);
					putchar(i);
					n++;
					break;
				case 's':
					c = va_arg(pa, char *);
					n += strl(c);
					for (; *c != '\0'; c++)
						putchar(*c);
					break;
				case 'd':
					i = va_arg(pa, int);
					decimal(&i, &n);
					break;
				case 'i':
					i2 = va_arg(pa, unsigned int);
					integer(&i2, &n);
					break;
				case 'b':
					binary(va_arg(pa, unsigned int ));
					break;
				default:
					format--;
					putchar('%');
					n++;
			}
		}
	}
	va_end(pa);
	return (n);
}
