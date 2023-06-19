#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
*/
int main(void)
{

	int a;

	for (a = a; a < 9; a++)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	putchar('$');
	return (0);
}
