#include "main.h"
/**
 *create_file - it is a function that creates a file
 * @filename: name of the file to create and text-content
 * @text_content: content of the text
 * Return: null
 */
int create_file(const char *filename, char *text_content)
{
	int g, f, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	g = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	f = write(g, text_content, len);

	if (g == -1 || f == -1)
		return (-1);
	close(g);

	return (1);
}
