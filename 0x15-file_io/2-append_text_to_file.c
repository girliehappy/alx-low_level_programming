#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file. Return 1 if the
 * file exists and -1 if the file does not exist or if you do not have the
 * required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, res_write, len_str = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_str = 0; text_content[len_str];)
			len_str++;
	}

	file_des = open(filename, O_WRONLY | O_APPEND);
	res_write = write(file_des, text_content, len_str);

	if (file_des == -1 || res_write == -1)
		return (-1);

	close(file_des);
	return (1);
}
