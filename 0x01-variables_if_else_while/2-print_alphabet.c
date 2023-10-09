#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - prints the alphabet in lowercase
 *
 * Return: Always return 0
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
