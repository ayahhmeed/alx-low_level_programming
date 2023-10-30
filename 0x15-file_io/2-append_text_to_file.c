#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, content_size = 0, bytes_written;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[content_size])
			content_size++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
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

