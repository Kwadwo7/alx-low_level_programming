#include "main.h"

/**
 * append_text_to_file - it appends text at the end of a file.
 * @filename: A pointer to the name of the file
 * @text_content: the string to be added to the end of the file
 * Return: -1 if the function fails or filename is NULL
 * if the filename does not exit the user lacks the write permissions
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int m;
	int g;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	m = open(filename, O_WRONLY | O_APPEND);
	g = write(o, text_content, length);

	if (m == -1 || g == -1)
		return (-1);
	close(o);
	return (1);
}
