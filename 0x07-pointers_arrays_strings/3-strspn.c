#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *reset_accept;
	int found;

	while (*s)
	{
		found = 0;
		reset_accept = accept;

		while (*reset_accept)
		{
			if (*s == *reset_accept)
			{
				count++;
				found = 1;
				break;
			}
			reset_accept++;
		}
		if (!found)
			break;
		s++;
	}

	return (count);
}
