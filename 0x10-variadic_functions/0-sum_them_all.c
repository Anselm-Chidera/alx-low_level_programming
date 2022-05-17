#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - Sums all the argument used
 * @n: number of entries
 * Return: 0 if no input, otherwise return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list elem;
	int sum = 0;
	unsigned int sz;

	if (n == 0)
		return (0);
	va_start(elem, n);

	for (sz = 0; sz < n; sz++)
		sum += va_arg(elem, int);

	va_end(elem);
	return (sum);
}

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);
    return (0);
}
