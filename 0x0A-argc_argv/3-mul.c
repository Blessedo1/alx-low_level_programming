#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers taken as arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int result;
	int i;
	int j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;
	printf("%d\n", result);
	return (0);
}
