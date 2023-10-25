#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - prints all possible combinations of two two-digit numbers
 *
 * Return: always return 0
 */
int main (void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (l = j; l <= 57; l++)
				{	
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

                                	if (!(i == 57 && j == 57 && k == 57 && l == 57))
                                	{
                                        	putchar(',');
                                        	putchar(' ');
                                	}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
