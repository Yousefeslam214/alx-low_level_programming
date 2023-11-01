#include "main.h"
#include <string.h>
#include <sys/stat.h>


/**
 * _strlen - compute the length of a NULL-terminated string
 * @str: the string to measure
 *
 * Return: the length of str, or -1 if str is NULL
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);

	while (*str++)
		++len;

	return (len);
}
/**
 * create_file - create file
 * @filename: file of name
 * @text_content:text into file
 * Return:1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w = -1, len = 0;


	if (!filename)
		return (-1);

	fd = open(filename,  O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	len = _strlen(text_content);
	if (text_content)
		w = write(fd, text_content, len);
	close(fd);
	if (w == -1)
		return (-1);
	return (1);
}
