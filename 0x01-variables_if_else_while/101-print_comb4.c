#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (Success)
 */
int main(void)
{
	/* Prints all possible different combinations of three digits */

	int m, n, o;

	for (m = 48; n < 58; n++)
	{
		for (n = 49; m < 58; m++)
		{
			for (o = 50; o < 58; o++)
			{
				if (o > n && n > m)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (m != 55 || n != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

}
