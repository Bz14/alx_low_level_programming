#include "main.h"
/**
 * buffer - create 1024 size of buffer
 * @fileName: file name
 * Return: buffer with 1024 size
 */
char *buffer(char *fileName)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileName);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - close a file
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int val;

	val = close(fd);
	if (val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copy file content to another file
 * @argc: number of arguments
 * @argv: the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char *buff;
	ssize_t read_byte, write_byte;
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff =  buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	read_byte = read(file_from, buff, BUFFER_SIZE);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (file_from == -1 || read_byte == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		write_byte = write(file_to, buff, read_byte);
		if (file_to == -1 || write_byte == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		read_byte = read(file_from, buff, BUFFER_SIZE);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_byte > 0);
	free(buff);
	close_file(file_to);
	close_file(file_from);
	return (0);
}
