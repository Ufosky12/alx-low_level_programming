#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (Success)
 */
int main(void)
{
	/* Print all possible combination of single digit numbers putchar */

	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	if (n != 57)
	{
		putchar(',');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
