#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of created file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 * if filename is NULL return -1
 * Return 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[text_len])
		{
			text_len++;
		}
		bytes_written = write(fd, text_content, text_len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
