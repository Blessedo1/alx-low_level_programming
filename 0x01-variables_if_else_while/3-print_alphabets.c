#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - prints the alphabet in lower then in upper case
 *
 * Return: always return 0
 */
int main(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (lower[i] && upper[i] != '\0')
	{
		putchar(lower[i]);
		putchar(upper[i]);
	}

	return (0);
}
