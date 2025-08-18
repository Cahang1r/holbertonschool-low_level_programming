#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and checks for failure
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated memory
 *         terminates the program with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
        exit(98);

    return ptr;
}
