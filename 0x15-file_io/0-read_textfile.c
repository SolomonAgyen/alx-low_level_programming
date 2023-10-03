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

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);

if (bull == NULL)
return (0);

t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);

if (t == -1 || w == -1)
return (0);

free(buf);
close(fd);
return (w);
}
