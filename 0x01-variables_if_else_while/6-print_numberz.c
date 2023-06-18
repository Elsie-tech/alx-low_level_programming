#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
*/
int main(void)
{

	int d;

	for (d = 0; d <= 9; d++)
	{
		putchar((d % 10) + '0');
	}
	putchar("\n");
	return (0);
}

