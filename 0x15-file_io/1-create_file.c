#include "main.h"

/**
 * create_file - creates a file
 * @filename: files name
 * @text_content: content added to file
 *
 * Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);

	return (1);
}
