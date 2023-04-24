#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * binary - print the binary counterpart of an unsigned integer
 * @v: a va_list pointer
 * Return: number of character printed
 */
int binary(va_list *v)
{
	link_l *new, *head = NULL;
	int d = va_arg(*v, int);
	int rest;
	int n = 0;

	while (d != 0)
	{
		rest = d % 2;
		d /=  2;
		new = malloc(sizeof(link_l));
		new->n = rest;
		new->next = head;
		head = new;
	}

	while (head != NULL)
	{
		_putchar('0' + head->n);
		n++;
		new = head;
		head = head->next;
		free(new);
	}
	return (n);
}

