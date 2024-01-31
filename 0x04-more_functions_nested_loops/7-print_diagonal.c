#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (j == n - 1)
			continue;
		_putchar('\n');
	}
	_putchar('\n');
}
