#include <stdio.h>

int main(void)
{
    int number;
    for (number = 0; number <= 16; number++)
    {
        if (number < 10)
        {
            putchar(number + '0');

        }
        else
        {
            putchar(number / 10 + '0');
            putchar(number % 10 + '0');

        }

    }
       
    putchar('\n');
    return 0;
}