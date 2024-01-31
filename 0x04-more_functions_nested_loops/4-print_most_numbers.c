#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9 without 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		while (i != 50 && i != 52)
		{
			_putchar(i);
			break;
		}
	}
	_putchar('\n');
}
