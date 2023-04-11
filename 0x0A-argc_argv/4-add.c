#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, char *argv[])
{
	int sum;
	int j;
	int i;
	int k;
	int len;
	
	i = 0;
	if (argc == 1)
	{
		putchar(i + '0');
	}

	len = strlen(*argv);
	for (k = 1; k < len; k++)
	{
		if (isdigit(*argv[k] == 0))
		{
			printf("Error\n");
		}
	}
	sum = 0;
	for (j = 1; j < argc; j++)
	{
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
