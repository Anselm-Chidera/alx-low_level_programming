#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; ++x)
	{
		putchar('0' + x);
	}
	for (y = 'A'; y <= 'F'; ++y)
	{
		putchar(tolower(y));
	}
	putchar('\n');
	return (0);
}
