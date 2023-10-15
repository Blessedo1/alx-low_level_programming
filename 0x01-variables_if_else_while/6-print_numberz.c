#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - prints all single digit base 10 numbers starting from 0
 *
 * Return: always return 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
