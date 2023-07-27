#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
/**
 *read_textfile - reads a text file
 *@filename : file name
 *@letters: letters to be read
 *Return: 0 if no sucess
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t n;
	FILE *fp;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	buffer = (char *) malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	n = fread(buffer, sizeof(char), letters, fp);
	{
		if (n == 0)
		{
			fclose(fp);
			free(buffer);
			return (0);
		}
		buffer[n] = ('\0');
		if (write(STDOUT_FILENO, buffer, n) != (ssize_t) n)
		{
			fclose(fp);
			free(buffer);
			return (n);
		}
		fclose(fp);
		free(buffer);
	}
		return (n);
}
