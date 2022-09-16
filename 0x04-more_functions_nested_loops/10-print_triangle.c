#include "main.h"
#include <stdio.h>

void print_triangle(int size)
{
	int x, y;
	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y > 0; y--)
				putchar('.');
			for (y = 0; y < x; y++)
				putchar('#');
			if (x == size)
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}
