#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (Success)
 */
int main(void)
{
	/* Print all possible combination of single digit numbers putchar */

	int n;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');
	if (n == 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
