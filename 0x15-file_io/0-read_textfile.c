#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: read a text file
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
int fd;
ssize_t w;
int t;

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * letters);

if (buf == NULL)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
{
free(buf);
return (0);
}

t = read(fd, buf, letters);

if (t == -1)
{
free(buf);
return (0);
}

w = write(STDOUT_FILENO, buf, t);

if (w == -1 || w != t)
{
free(buf);
return (0);
}

free(buf);
close(fd);
return (w);
}
