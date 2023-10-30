#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, read_bytes, write_bytes;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}

	read_bytes = read(file_descriptor, buffer, letters);
	if (read_bytes < 0)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes < 0 || read_bytes != write_bytes)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (read_bytes);
}

