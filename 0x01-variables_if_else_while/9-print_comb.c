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

	for (a = a; a < 10; a++)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('$');
	putchar('\n');
	return (0);
}
