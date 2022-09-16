#include "main.h"
#include <stdio.h>

void more_numbers(void)
{
	int x, y;
	for (y = 0; y <= 9; y++)	
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
				putchar((x / 10) + '0');
			putchar((x % 10) + '0');
		}
				putchar('\n');
	}
}
