#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: letters
 *
 * Return: number of letters written
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *my_file;

	if (filename == NULL)
		return (0);
	my_file = malloc(sizeof(char) * letters);
	if (my_file == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	re = read(op, my_file, letters);
	wr = write(STDOUT_FILENO, my_file, re);
	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(my_file);
		return (0);
	}
	free(my_file);
	close(op);

	return (wr);
}
