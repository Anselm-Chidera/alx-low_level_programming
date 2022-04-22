#include "main.h"

/**
 * rev_strig - function that reverses a string
 * @s: sting to reverse
 * Return: nothing
 */

void rev_strin(char *s)
{
	int len = 0, index = 0;
	char tmp;

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
