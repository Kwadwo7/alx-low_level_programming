#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication of 2 numbers
 * @argc: argument count
 * @argv: argument entered
 * Return: 0 for success and 1 for Error
 */

int main(int argc, char *argv[])
{
	int first;
	int second;
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	first = atoi(argv[1]);
	second = atoi(argv[2]);
	i = first * second;

	printf("%d\n", i);
	return (0);
}
