#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * create_file - creates a file and writes a string to it.
 *
 * @filename: the name of the file to create.
 * @textContent: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *textContent)
{
	int fd, len, bytes_written;

	len = 0;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (textContent != NULL)
	{
		while (textContent[len])
			len++;

		bytes_written = write(fd, textContent, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}

	}

	close(fd);
	return (1);
}
