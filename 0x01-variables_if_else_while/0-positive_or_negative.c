#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%zu is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%zu is zero\n", n);
	}
	else
	{
		printf("%zu is negative\n", n);
	}
	return (0);
}
