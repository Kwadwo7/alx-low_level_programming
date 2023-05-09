#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to the standard output.
 * @filename: text file which is read
 * @letters: the number of letters to be read
 * Return: the actual number of bytes read and printed
 * 0 when the function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f, g, h;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	h = read(f, buffer, letters);
	g = write(STDOUT_FILENO, buffer, h);

	free(buffer);
	close(f);
	return (g);
}
