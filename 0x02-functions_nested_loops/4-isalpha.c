#include "main.h"

/**
 * _isalpha - check for alhabetic characters
 * @c: alphabetic characters to be checked
 * Return: 1 if c is a letter, lowercase or upper case and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
