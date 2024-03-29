#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: filename
 *
 * @text_content: added text
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int rw;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		rw = write(fd, text_content, strlen(text_content));

		if (rw == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
