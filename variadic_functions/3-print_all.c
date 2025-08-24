#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of format specifiers.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (
			format[i] == 'c' ||
			format[i] == 'i' ||
			format[i] == 'f' ||
			format[i] == 's'
		)
		{
			printf("%s", sep);

			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
			}
			sep = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
