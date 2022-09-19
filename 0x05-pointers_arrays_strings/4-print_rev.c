#include "main.h"
#include <string.h>

/**
 *  * print_rev - Prints a string in reverse.
 *
 *   * @s: The string to be printed.
 *
 */

void print_rev(char *s)
{
	int l, i;
	char *begin, *end, ch;
	l = strlen(s);
	begin = s;
	end = s;
	for (i = 0; 1 < l - 1; i++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;
		begin++;
		end--;
	}
}
