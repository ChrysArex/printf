#include <stdio.h>
/**
 * decimal - print decimal number
 * @i: pointer to the number we want to display
 * @n: pointer to the count
 * Return: nothing
 */
void decimal(int *i, int *n)
{
	int div = 1, rest = 0;

	if (*i < 0)
	{
		*i *= -1;
		putchar('-');
	}
	(*n)++;
	while (rest != *i)
	{
		div *= 10;
		rest = *i % div;
	}
	for (div /= 10; div >= 10; div /= 10)
	{
		rest = (*i - (*i % div)) / div;
		putchar('0' + rest);
		(*n)++;
		*i = *i % div;
	}
	putchar('0' + *i);
	(*n)++;
}
