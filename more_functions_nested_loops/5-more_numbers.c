#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');  /* print tens digit only if >= 10 */
			_putchar((j % 10) + '0');      /* always print units digit */
		}
		_putchar('\n');  /* print newline after each line */
	}
}
