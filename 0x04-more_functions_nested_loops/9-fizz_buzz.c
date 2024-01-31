#include <stdio.h>

/**
 * main - prints 1 to 100 with multiples of 3: Fizz, 5: Buzz, both: FizzBuzz
 * Return: Always return 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
                        printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
