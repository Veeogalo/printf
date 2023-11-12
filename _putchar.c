#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

file: print_'%'.c

#include "main.h"
/**
 * print_37 - prints the char %.
 * Return: 1.
 */
int print_37(void)
{
	_putchar(37);
	return (1);
}

#include "main.h"
/**
 * print_exc_string - print exclusuives string.
 * @val: parameter.
 * Return: integer.
 */

int print_exc_string(va_list val)
{
	char *s;
	int i, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEX_extra(value);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}
