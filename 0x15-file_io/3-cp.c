#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - alocates bytes for the buffer
 * @file: nae of the file
 * Return: pointer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer =  malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - raps file description
 * @fd:the file description closed
 */
void close_file(int fd)
{
	int v;

	v = close(fd);

	if (v == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Entry point
 *@argc: numbeer if arguments in the program
 *@argv: an array of pointers to the program
 *Return: 0 meaning succes
 */
int main(int argc, char *argv[])
{
	int from, to, q, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	q = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || q == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, q);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		q = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (q > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
