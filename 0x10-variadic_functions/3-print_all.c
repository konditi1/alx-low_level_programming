#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints a combination of characters, integers, floats,
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c, *s;
	int i;
	float f;
	int j = 0;

va_start(args, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			default:
				j++;
				continue;
		}
		j++;
		if (format[j])
			printf(", ");
	}
	va_end(args);
	printf("\n");
}

