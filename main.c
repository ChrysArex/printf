#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
	char c = 'a';
	char *s = "sion";

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d, %d\n", len, len2);
	printf("%d\n", _printf("voici m%c ver%s\n", c, s));
	return (0);
}
