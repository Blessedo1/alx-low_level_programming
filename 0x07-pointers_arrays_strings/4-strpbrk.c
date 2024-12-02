#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *reset_accept;

	while (*s)
	{
		reset_accept = accept;
		while (*reset_accept)
		{
			if (*s == *reset_accept)
				return (s);
			reset_accept++;
		}
		s++;
	}
	return ('\0');
}
