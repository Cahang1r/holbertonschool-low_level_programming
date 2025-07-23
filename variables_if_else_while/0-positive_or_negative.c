#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    srand(time(0));  // Don't touch this code
    n = rand() - RAND_MAX / 2;  // Don't touch this code

    if (n > 0)
    {
        printf("%d is positive\n", n);  // Number is positive
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);  // Number is zero
    }
    else
    {
        printf("%d is negative\n", n);  // Number is negative
    }

    return 0;
}
