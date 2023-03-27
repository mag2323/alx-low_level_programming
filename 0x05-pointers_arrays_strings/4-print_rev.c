#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int long i = 0;
	int o;

	while (*s != '\0')
{
	long i++;
	s++;
}
	s--;
	for (o = longi; o > 0; o--)
{
	_putchar(*s);
	s--;
}
	_putchar('\n');
}

