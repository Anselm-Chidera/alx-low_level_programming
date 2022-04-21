#include "main.h"

/**
 * rev_strig - function that reverses a string
 * @s: sting to reverse
 * Return: nothing
 */

void rev_strin(char *s)
{
	int i = 0;
	int aux = 0;
	char ltemp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (aux < i)
	{
		ltemp = s[i];
		s[i] = s[aux];
		s[aux] = ltemp;
		aux++;
		i--;
	}
}
