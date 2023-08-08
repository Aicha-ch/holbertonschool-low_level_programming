#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * @filename: name of the file
 * @letters: numbers of letters printed
 *
 * Return: number of letters it could read and print, if fails, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int nl;
	char *buf;
	
	if (filename == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	
	nl = read(fd, buf, letters);
	if (write(STDOUT_FILENO, buf, nl) != nl)
		return (0);
	
	close(fd);
	free(buf);
	
	return (nl);
}
