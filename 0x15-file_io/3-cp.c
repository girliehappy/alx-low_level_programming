#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int file_des);

/**
 * create_buffer - A function that allocates 1024 bytes for a buffer.
 * @file: The name of the file that buffer is storing chars for.
 * Return: pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - A function that closes file descriptors.
 * @file_des: The file descriptor to be closed.
 */
void close_file(int file_des)
{
	int cl;

	cl = close(file_des);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", file_des);
		exit(100);
	}
}

/**
 * main - A function that copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from_file, to_file, read_file, write_file;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_file = open(argv[1], O_RDONLY);
	read_file = read(from_file, buffer, 1024);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_file == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_file = write(to_file, buffer, read_file);
		if (to_file == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_file = read(from_file, buffer, 1024);
		to_file = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_file > 0);

	free(buffer);
	close_file(from_file);
	close_file(to_file);

	return (0);
}
