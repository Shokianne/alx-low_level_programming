#include <stdio.h>

int main(void)
{
	int b;
	for (b = 1; b <= 100; b++)
	{
		if ((b % 3) == 0 && (b % 5) == 0)
			printf("FizzBuzz");
		else if ((b % 3) == 0)
			printf("Fizz");
		else if ((b % 5) == 0)
			printf("Buzz");
		else
			printf("%d", b);
		if (b == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
