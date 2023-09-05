#include "main.h"
#include "stdlib.h"

/**
 * read_textfile - A function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: A pointer to a string containing the name of the
 * text file to be read
 * @letters: is the number of letters it should read and print
 * Return: write - actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t file_des;
	ssize_t res_write;
	ssize_t res_read;

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	res_read = read(file_des, buff, letters);
	res_write = write(STDOUT_FILENO, buff, res_read);

	free(buff);
	close(file_des);
	return (res_write);
}
