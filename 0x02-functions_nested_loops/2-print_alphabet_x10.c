#include "main.h"

/**
 * print_alphabet - prints alphabets ten times
 *
 * Return void
 *
 */

void print_alphabet(void)
{
	char b, c;
	for (b = 0; b <= 9; b++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);

		}

		_putchar('\n');

	}

}
