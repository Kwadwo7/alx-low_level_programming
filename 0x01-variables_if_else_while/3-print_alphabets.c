#include <stdio.h>

/**
 * main - print upper and lower case
 * Return: 0 for success
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	printf("\n");
	return (0);
}
