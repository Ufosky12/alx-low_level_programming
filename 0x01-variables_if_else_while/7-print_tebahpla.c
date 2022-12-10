#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	/* Program to print lowercase alphabet in reverse putchar */

	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
