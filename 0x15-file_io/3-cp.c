#include "main.h"

/**
 * create_buf - creates buffer alloc
 * @f: input
 *
 * Return: pointer to buffer alloc
 */

char *create_buf(char *f)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - close file
 * @fd: input
 */

void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - writes program that copies file to another file
 * @argc: input
 * @argv: input
 *
 * Return: none
 */

int main(int argc, char *argv[])
{
	int f_from, f_to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buf(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	r = read(f_from, buf, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		w = write(f_to, buf, r);
		if (f_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(f_from, buf, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	close_file(f_from);
	close_file(f_to);
	return (0);
}
