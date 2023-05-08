#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- function that read text file and print to STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of letters read and written
 * 	0 when filename is NULL and write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t fd;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	c = malloc(sizeof(char) * letters);
	y = read(fd, c, letters);
	x = write(STDOUT_FILENO, c, y);

	free(c);
	close(fd);
	return (x);
}
