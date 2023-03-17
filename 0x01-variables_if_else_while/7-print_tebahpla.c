#include <stdio>

/**
 * main - main function
 * Return: 0 for success
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar("\n");
	return (0);
}
