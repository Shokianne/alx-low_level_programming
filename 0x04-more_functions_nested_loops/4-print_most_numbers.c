#include "main.h"
#include <stdio.h>

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 58; a++)
	{
		if (a != 50 && a != 52)

			putchar(a);
	}
	return;

	putchar ('\n');

}
