#include <stdio.h>
#include <stdarg.h>

/**
 *strl - length
 * Description: count the number of character in a srting
 * @s: pointer to the string
 * Return: length of the string
 */
int strl(char *s)
{
	int n = 0;

	for (; *s != '\0'; s++)
		n++;
	return (n);
}

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
	int i;
	char *c;
	va_list pa;

	va_start(pa, format);
	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			printf("%c", *format);
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
					n += strl(c) - 1;
					printf("%s", c);
					break;
			}
		}
	}
	va_end(pa);
	return (n);
}
