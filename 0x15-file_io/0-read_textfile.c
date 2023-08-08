#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @letters: Number of letters to be read.
 * @filename: Text file being read.
 *
 * Return: Number of bytes read and printed, or 0 on failure or NULL filename.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, p, q;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	q = read(fd, buf, letters);
	p = write(STDOUT_FILENO, buf, q);

	free(buf);
	close(fd);

	return (p);
}

