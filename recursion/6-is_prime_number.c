#include "main.h"

/**
 * _is_prime_helper - recursive helper to check if n is divisible by i
 * @n: number to check
 * @i: current divisor to test
 *
 * Return: 1 if prime, 0 if not
 */
int _is_prime_helper(int n, int i)
{
    if ( i * i > n)
        return (1);
    else if (n % i == 0)
        return (0)
    else
        return (is_prime_number(n, i + 1));
}

/**
 * is_prime_number - checks if n is a prime number
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    else
        return (is_prime_number(n, 2));
}