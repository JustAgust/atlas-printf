#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>


typedef struct print{
	char *ink;
	int (*read)(va_list, int);
}copy;
/** Insert prototypes for printf project below */
int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
char *_strcat(char *dest, char *src);
size_t strlen(const char *str);
char* strcpy(char* destination, const char* source);
void reverse(chat str[], int lenght);
char *itoa(int num, char *str, int base);
#endif
