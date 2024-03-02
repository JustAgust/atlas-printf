#include "main.h"
/**
 *_printf - prints formatted string
 *
 *
 * Return: output length
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	char *os;
	va_list parm;

	os = malloc(1000);
	if (os == NULL)
		return (-1);
	va_start(parm, format);
	/**i = 0;
	  j = 0;*/
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{

				os[j] = (char)va_arg(parm, int);
			}
			else if (format[i] == 's')
			{
				os[j] = '\0';
				_strcat(os, va_arg(parm, char *));
				j = _strlen(os) - 1;
			}
			else if (format[i] == '%')
				os[j] = '%';
		}
		else (os[j] = format[i]);
		i++;
		j++;
	}
	os[j] = '\0';
	write(1, os, j);
	va_end(parm);
	free(os);
	return (j);
}


