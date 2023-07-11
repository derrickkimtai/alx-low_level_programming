#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
#include <sys/types.h>
ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <stddef.h>
#endif
