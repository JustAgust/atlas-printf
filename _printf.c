#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0;
	int o = 0;
	int k = 0;
	char t[1024];
	va_list parm;
	va_start(parm, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%') 
		{
			i++;
			if (format[i] == 'c')
			{
				int p = va_arg(parm, int);
				write(1, &p, 1);
			}
			else if (format[i] == 's')
			{
				char *args = va_arg(parm, char *);
				if (args == NULL || args[o] == '\0')
				{
					write(1, "(null)", 6);
				}
				else
				{
					while (args[o] != '\0')
					{
						write(1, args + o, 1);
						o++;
					}
				}
				o = 0;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				int number = va_arg(parm, int);
				itoa(number, (char *)t, 10);
				while (t[k] != '\0')
				{
					write(1, t, 1);
					k++;
				}
				k = 0;

			}
		}
		else 
		{        
			write(1, format + i, 1);

		}

		i++;
	}
	va_end(parm);
	return (0)
	
}
