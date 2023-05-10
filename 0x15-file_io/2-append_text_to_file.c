#include "main.h"
/**
 * append_text_to_file - Appends text at the end
 * @filename: A pointer to the file
 * @text_content: The string to be  add
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int r, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	r = open(filename, O_WRONLY | O_APPEND);
	b = write(r, text_content, len);

	if (r == -1 || b == -1)
		return (-1);

	close(r);

	return (1);
}
