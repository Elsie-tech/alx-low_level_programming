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

	for (a = '0'; a < '9'; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	putchar('$');
	return (0);
}
