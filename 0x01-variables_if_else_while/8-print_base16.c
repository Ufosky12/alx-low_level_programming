#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (Success)
 */
int main(void)
{
	/* Program to print all the number of base 16 in lowercase */

	int n;
	char ch;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
