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
	char lower[] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	while (lower != '\0')
	{
		putchar(lower[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
