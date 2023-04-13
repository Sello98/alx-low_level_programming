#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file that is being read
 * @letters: number of letters that shoul be read
 * Return: w- actual number of bytes read and printed
 *        0 filename is NULL or when function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}

