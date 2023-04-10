#include <stdio.h>

/**
 * main - prints argument count
 * @argc: number of arguments
 * @argv: arguments entered
 * Return: 0 for success
 */

int main(int argc, char	*argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
