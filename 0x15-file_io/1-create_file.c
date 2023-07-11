#include "main.h"
/**
 *create_file - creates a file
 *@filename: file name
 *@text_content:content to be written
 *Return: 1 on sucess
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		i = write(fd, text_content, len);
		if (i == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
