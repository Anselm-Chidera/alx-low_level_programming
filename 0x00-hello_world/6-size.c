#include <stdio.h>

/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: Always 0 (success)
 *
 *   */

int main(void)

{

		int i;
		char a;
		long int e;
		long long int f;
		float g;

		printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
		printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
		printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
 		printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(f));
		printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(g));
								
		return (0);
}
