#ifndef main_h
#define main_h
#include <stdarg.h>
/**
 * struct id - data structure to identifie a function
 * with an format indentifier
 * @id: the identifier of the function
 * @func: pointer the the function
 */
typedef struct id
{
	char id;
	int (*func)(va_list *);
} id_func;
/**
 * struct linked - linked list
 * @n: the data
 * @next: pointer to the next
 */
typedef struct linked
{
	int n;
	struct linked *next;
} link_l;
int _putchar(char c);
int handler(char c, va_list *ppa);
int _printf(const char *format, ...);
int strl(char *s);
int character(va_list *v);
int string(va_list *v);
int decimal(va_list *v);
int integer(va_list *v);
int binary(va_list *v);
#endif

