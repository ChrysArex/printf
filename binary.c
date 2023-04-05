#include "main.h"
/**
 * binary - print the binary counterpart of an unsigned integer
 * @v: a va_list pointer
 * Return: number of character printed
 */
int binary(va_list *v)
{
	unsigned int d = va_arg(*v, unsigned int);
	unsigned int mult_ten = 1;
	unsigned int rest, total;
	unsigned int i2, div2 = 1, rest2 = 0;
	int n = 0;

	while (d != 0)
	{
		rest = d % 2;
		d /=  2;
		total += mult_ten * rest;
		mult_ten *= 10;
	}
	i2 = total;
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

