#include "main.h"

/**
 * read_textfile - read all text from file
 * @filename: fileNmae
 * @letters:the count of leterrs in file
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t w, r, fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);
	close(fd);
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
		return (0);
	free(buffer);
	return (w);
}
