#include "main.h"

/**
 * main - check the code.
 *
 * Return: 1 if c is a letter, lowercase or upper case and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c <= 97 && c >= 122))
	{
		return (1);
	}
	return (0);
}
