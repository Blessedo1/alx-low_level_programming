#include <stdio.h>

/**
 * main - Entry point
 *
 * printf - prints all single digit base 10 numbers starting from 0
 *
 * Return: always return 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}
