#include "main.h"

/**
 * read_textfile - hat reads a text file and prints it to the
 * POSIX standard output.
 * @filename: name of the text file to read
 * @letters: maximum of bytes to read and print
 * Return: num of bytes read and printed or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *size_file = NULL;
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	size_file = malloc(sizeof(char) * letters);

	if (size_file == NULL)
	{
		free(size_file);
		close(fd);
		return (0);
	}
	bytes_read = read(fd, size_file, letters);
	bytes_written = write(STDOUT_FILENO, size_file, bytes_read);
	free(size_file);
	close(fd);
	return (bytes_written);
}
