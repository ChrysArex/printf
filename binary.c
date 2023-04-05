#include "main.h"
#include <stdio.h>
/**
 * binary - print the binary counterpart of an unsigned integer
 * @d: the number we want to display
 * Return: nothing
 */
void binary(unsigned int d)
{
	unsigned int mult_ten = 1;
	unsigned int rest, total;
	int a;

	while (d != 0)
	{
		rest = d % 2;
		d /=  2;
		total += mult_ten * rest;
		mult_ten *= 10;
	}
	integer(&total, &a);
}
