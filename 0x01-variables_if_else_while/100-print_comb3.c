#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - all possible combinations of two-digit numbers without repitition
 *
 * Return: always return 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 56)
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
