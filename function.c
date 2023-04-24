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
	int n = 0;
	va_list pa;

	va_start(pa, format);
	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			_putchar(*format);
			n++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				n++;
			}
			else
				n += handler(*format, &pa);
		}
	}
	va_end(pa);
	return (n);
}
