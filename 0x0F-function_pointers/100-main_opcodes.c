#include <stdio.h>
#include <stdlib.h>

/**
 * main - outputs opcodes
 * @argc: argument count
 * @argv: array arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int size;
	int j;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (j = 0; j < size; j++)
	{
		if (j == size - 1)
		{
			printf("%02hhx\n", array[j]);
			break;
		}
		printf("%02hhx ", array[j]);
	}
	return (0);
}
