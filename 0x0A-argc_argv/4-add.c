#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers passed to the argument
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	int j;

	if (argc < 2)
	{
		printf("0\n");
	}

	i = 1;
	while (i < argc)
	{
		for (j = 1; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
