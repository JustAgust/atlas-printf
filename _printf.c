#include "main.h"
/**
 *_printf - prints formatted string
 *@i: format string iterator
 *@j: output string iterator
 *@os: pointer to output string
 *@parm: variadic parameters/args
 * Return: output length
 */
int _strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
void _strcat(char *dest, const char *src) {
    int dest_len = _strlen(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
}
char* int_to_str(int num) {
    int temp = num;
    int digits = 0;
    int i = 0;
    char *str;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    str = malloc(digits + 1);
    for (i = digits - 1; i >= 0; i--) {
        str[i] = num % 10 + '0'; 
        num /= 10;
    }
    str[digits] = '\0';
    return str;
}
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	char *os;
	char *args;
	va_list parm;
	os = malloc(1024);
	if (os == NULL)
	{
		return (-1);
	}
	va_start(parm, format);
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
			/**	os[j] = '\0'; **/

				args = va_arg(parm, char *);
				if (args == NULL)
				{
				/**	args = "(null)";**/
				strcat(os, "(null)");
				}

				else
					strcat(os, args);
				j = strlen(os)/** - 1**/;


			}
			else if (format[i] == 'd' || format[i] == 'i') {
				int num = va_arg(parm, int);
				char *int_str = int_to_str(num);
				strcat(os, int_str);
				j = strlen(os);
				free(int_str);
			}
			else if (format[i] == '%')
				os[j] = '%';
		}
		else
		{
			(os[j] = format[i]);
		}
		i++;
		j++;
		if (j <= 1024){
			write(1, os, 1023);
		os[0] = '\0';
		j = 0;
		}	
	}
	os[j] = '\0';
	write(1, os, j);
	va_end(parm);
	free(os);
	return (j);
}
