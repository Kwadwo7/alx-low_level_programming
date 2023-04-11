#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - addition of integers
 * @argc: argument count
 * @argv: arguments entered
 * Return: 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	int sum;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (j = 1; argv[j]; j++)
	{
		if (isdigit(*argv[j]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[j]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
