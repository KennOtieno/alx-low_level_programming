#include <unistd.h>

/**
 * _putchar - writes the character c  to stdout
 * @c: Th character to print
 * Return: On success 1
 * Un error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
        return(write(1, &c, 1));
}
