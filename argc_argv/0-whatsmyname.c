#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: argument count (unused)
 * @argv: argument vector (array of strings)
 *
 * Description: prints the program name as called, including the path
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    printf("%s\n", argv[0]);
    return (0);
}
