#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number f letters it could read and print
 * 0 if the file can not be opened or read,
 * 0 if filename is NULL,
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t rd, wr;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fd);
	free(buffer);
	return (wr);
}

