#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: A pointer to a string containing the name of the file to be
 * created
 * @text_content: A pointer to a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_des, res_write, len_str = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len_str = 0; text_content[len_str];)
			len_str++;
	}
	file_des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	res_write = write(file_des, text_content, len_str);

	if (file_des == -1 || res_write == -1)
		return (-1);

	close(file_des);
	return (1);
}
