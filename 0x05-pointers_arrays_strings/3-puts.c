#include "main.h"

/**
 * _puts - printsa string
 * @str: the string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
