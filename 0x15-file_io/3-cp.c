/*
 * File: 3-cp.c
 * Auth: Nabil Mouhamech
 */

#include "main.h"

/**
 * safe_close - A function that closes a file and prints error when closed file
 * @description: Description error for closed file
 *
 * Return: 1 on success, -1 on failure
 */
int safe_close(int description)
{
	int error;

	error = close(description);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);
	return (error);
}

/**
 * open_file - Opens a file and returns its file descriptor
 * @filename: The name of the file to open
 * @flags: The flags to use when opening the file
 *
 * Return: The file descriptor on success, exit on failure
 */
int open_file(const char *filename, int flags)
{
	int fd = open(filename, flags);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		safe_close(fd);
		exit(98);
	}
	return (fd);
}

/**
 * read_write_loop - Reads from one file and write to another
 * @from_fd: The file descriptor to read from
 * @to_fd: The file descriptor to write to
 */
void read_write_loop(int from_fd, int to_fd)
{
	char buffer[1024];
	int bytes_read, error;

	while ((bytes_read = read(from_fd, buffer, sizeof(buffer))) > 0)
	{
		error = write(to_fd, buffer, bytes_read);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			safe_close(from_fd);
			safe_close(to_fd);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		safe_close(from_fd);
		safe_close(to_fd);
		exit(98);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 1 on success.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	read_write_loop(from_fd, to_fd);

	safe_close(from_fd);
	safe_close(to_fd);
	return (0);
}
