#include <stdarg.h>
#include "main.h"
/*******************************************************************/
/**
 * character - print a character
 * @v: a va_list
 * Return: number of character printed
 */
int character(va_list *v)
{
	int n = 0;
	int i = va_arg(*v, int);

	_putchar(i);
	n++;
	return (n);
}
/*******************************************************************/
/**
 * string - print a string
 * @v: a va_list
 * Return: number of character printed
 */
int string(va_list *v)
{
	char *c = va_arg(*v, char *);
	int n = strl(c);

	for (; *c != '\0'; c++)
		_putchar(*c);
	return (n);
}
/********************************************************************/
/**
 * decimal - print decimal number
 * @v: a vi_arg
 * Return: number of character printed
 */
int decimal(va_list *v)
{
	int n = 0;
	int i = va_arg(*v, int);
	int div = 1, rest = 0;

	if (i < 0)
	{
		i *= -1;
		_putchar('-');
		n++;
	}
	while (rest != i)
	{
		div *= 10;
		rest = i % div;
	}
	for (div /= 10; div >= 10; div /= 10)
	{
		rest = (i - (i % div)) / div;
		_putchar('0' + rest);
		n++;
		i = i % div;
	}
	_putchar('0' + i);
	n++;
	return (n);
}
/***********************************************************************/
/**
 * integer - print unsigned integer
 * @v: a vi_list pointer
 * Return: number of character printed
 */
int integer(va_list *v)
{
	int n = 0;
	unsigned int i2 = va_arg(*v, unsigned int);
	unsigned int div2 = 1, rest2 = 0;

	while (rest2 != i2)
	{
		div2 *= 10;
		rest2 = i2 % div2;
	}
	for (div2 /= 10; div2 >= 10; div2 /= 10)
	{
		rest2 = (i2 - (i2 % div2)) / div2;
		_putchar('0' + rest2);
		n++;
		i2 = i2 % div2;
	}
	_putchar('0' + i2);
	n++;
	return (n);
}
/***********************************************************************/
/**
 * handler - apply the right function to print a certain format
 * @c: the selected format
 * @ppa: pointer to the arguments
 * Return: the number of character printed
 */
int handler(char c, va_list *ppa)
{
	int i, n;

	id_func f_conv[5] = {
		{'c', character}, {'s', string}, {'d', decimal}, {'i', integer},
		{'%', character}
	};
	for (i = 0; i <= 5; i++)
	{
		if (f_conv[i].id == c)
		{
			n = (*f_conv[i].func)(ppa);
			break;
		}
	}
	return (n);
}
