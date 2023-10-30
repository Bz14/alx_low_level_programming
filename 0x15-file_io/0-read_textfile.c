#include "main.h"
/**
 * read_textfile - read text file and print to standard output
 * @filename: name of the file
 * @letters: number of characters to be printed
 * Return: actual number of letters to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	size_t readByte, writeByte;
	int fp;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	readByte = read(fp, buffer, letters);
	buffer[readByte] = '\0';
	if (readByte <= 0)
	{
		close(fp);
		return (0);
	}
	writeByte = write(STDOUT_FILENO, buffer, readByte);
	close(fp);
	if (readByte != writeByte)
		return (0);
	return (writeByte);
}
