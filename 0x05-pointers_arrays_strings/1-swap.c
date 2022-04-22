#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: pointer to an integer (a)
 * @b: pointer to another integer (b)
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
