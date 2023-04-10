#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	int i;
	int change;
	int amount;
	int coins[] = {25, 10, 5, 2, 1};

	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	change = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < 5 && amount >= 0; i++)
	{
		while (amount >= coins[i])
		{
			change++;
			amount -= coins[i];
		}
	}
	printf("%d\n", change);
	return (0);
}

