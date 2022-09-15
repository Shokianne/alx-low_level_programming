#include "main.h"


void print_triangle(int size)

{
	int x, y;
	
	if (size > 0)
	
	{
		for (x = 1; x <= size; x++)
		
		{
			for (y = size - x; y > 0; y--)
				
				_putchar('h');
			
			for (y = 0; y < x; y++)
				
				_putchar('s');
			
			if (x == size)
				
				continue;
			
			_putchar('\n');
		}
	}
	
	_putchar('\n');
}
