#include "main.h"

/**
 * main - check the code
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *str;

	str = argstostr(argc, argv);
	if (str == NULL)
		return (1);
	printf("%s", str);
	free(str);

	return (0);
}
