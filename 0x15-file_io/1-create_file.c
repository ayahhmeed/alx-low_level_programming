#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, content_size = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[content_size])
			content_size++;
	}

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		bytes_written = write(file_descriptor, text_content, content_size);
		if (bytes_written < 0)
			return (-1);
	}

	close(file_descriptor);
	return (1);
}

