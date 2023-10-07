#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* This function assigns number to the variable n and ates whether the number is positive or negative each time it is executed */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else
	printf("%d is negative\n", n);
	return (0);
}
