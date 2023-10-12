#include "main.h"

/**
 * _islower - A function that checks for lowercase letter
 *
 * Return: returns 1 if c is lowercase, and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
