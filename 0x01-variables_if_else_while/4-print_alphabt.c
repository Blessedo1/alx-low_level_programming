#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - prints the alphabet in lowercase except q and e
 *
 * Return: always return 0
 */
int main(void)
{
	char alphabet[] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
