#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
    int i;
    int j;
    for (i = 0;i < 10;i++)
    {
        for (j = 0;j <= 14;j++)
            	_putchar((j / 10) + '0');   /* print tens digit */

			_putchar((j % 10) + '0');       /* print units digit */
    }
    _putchar('\n');
}