#include <stdio.h>
#include <stdarg.h>

/**
 * main - prints all arguments it receives including the first one
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
