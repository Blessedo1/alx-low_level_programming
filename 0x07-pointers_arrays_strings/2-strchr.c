#include "main.h"

/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
	}
	return (NULL);
}
