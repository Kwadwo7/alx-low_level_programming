#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *filename);
void close_a_file(int f);

/**
 * create_buff - allocates memory(1024 bytes) for a buffer
 * @filename: the name of the file the buffer is storing the chars
 * Return: a pointer to the new buffer created.
 */

char *create_buff(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}

/**
 * close_a_file - it closes file descriptors.
 * @f: the file descriptor which would be closed
 */

void close_a_file(int f)
{
	int a;

	a = close(f);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
		exit(100);
	}
}

/**
 * main - it copies the content of one file to another file
 * @argc: the number of arguments
 * @argv: pointers to the arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int from_file;
	int to_file;
	int s;
	int t;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buff(argv[2]);
	from_file = open(argv[1], O_RDONLY);
	s = read(from_file, buffer, 1024);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from_file == -1 || s == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		t = write(to_file, buffer, s);
		if (to_file == -1 || t == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		s = read(from_file, buffer, 1024);
		to_file = open(argv[2], O_WRONLY | O_APPEND);
	} while (s > 0);
	free(buffer);
	close_a_file(from_file);
	close_a_file(to_file);
	return (0);
}
