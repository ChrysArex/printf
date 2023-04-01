#include <stdio.h>
/**
 * integer - print unsigned integer
 * @i2: pointer to the number we want to display
 * @n: pointer to the count
 * Return: nothing
 */
void integer(unsigned int *i2, int *n)
{
	unsigned int div2 = 1, rest2 = 0;

	while (rest2 != *i2)
	{
		div2 *= 10;
		rest2 = *i2 % div2;
	}
	for (div2 /= 10; div2 >= 10; div2 /= 10)
	{
		rest2 = (*i2 - (*i2 % div2)) / div2;
		putchar('0' + rest2);
		(*n)++;
		*i2 = *i2 % div2;
	}
	putchar('0' + *i2);
	(*n)++;
}
