#include "main.h"

/**
 * main - copy file content to another file
 * @argc: number of arguments
 * @argv: the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char** argv)
{
	char *msg, buffer[BUFFER_SIZE];
	ssize_t read_byte, write_byte;
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
 		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		exit (98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP |S_IWGRP | S_IROTH);
  if (file_to == -1)
    {
      msg = "Error: Can't write to ";
      dprintf(STDERR_FILENO, "%s%s\n", msg, argv[2]);
      close(file_to);
      exit (99);
    }
  read_byte = read(file_from, buffer, BUFFER_SIZE);
  if (read_byte <= 0)
    {
      msg = "Error: Can't read from file ";
      dprintf(STDERR_FILENO, "%s%s\n", msg, argv[1]);
      close(file_from);
      close(file_to);
      exit (98);
    }
  write_byte = write(file_to, buffer, read_byte);
  if (write_byte == -1)
    {
      msg = "Error: Can't write to ";
      dprintf(STDERR_FILENO, "%s%s\n", msg, argv[2]);
      close(file_to);
      close(file_from);
      exit (99);
    }
  if (close(file_from) == -1)
    {
      msg = "Error: Can't close fd ";
       dprintf(STDERR_FILENO, "%s%d\n", msg, file_from);
        close(file_from);
        return 100;
    }

    if (close(file_to) == -1)
      {
      msg = "Error: Can't close fd ";
       dprintf(STDERR_FILENO, "%s%d\n", msg, file_to);
        close(file_to);
        return 100;
    }
    return (0);
}
