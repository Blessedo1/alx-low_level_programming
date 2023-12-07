#include <stdio.h>
#include <stdarg.h>

/**
 * main - prints program name followed by a new line.
 * @argc: number of arguments
 * @argv: argument vector
 * Return: return zero
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
