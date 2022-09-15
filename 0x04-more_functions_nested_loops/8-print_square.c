#include "main.h"


void print_square(int size)


{
	int _putchar(char c);
	int height, width;
	
	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				
			_putchar('s');
			
			if (height == size - 1)
				
				continue;
			
			_putchar('\n');
		}
	}
	
	_putchar('\n');

}
