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
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
