#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - prints the lowercase alphabet in reverse
 *
 * Return: always return 0
 */
int main(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;

	while (lower != '\0')
	{
		putchar(lower[i]);
		i--;
	}
	putchar('\n');

	return (0);
}
