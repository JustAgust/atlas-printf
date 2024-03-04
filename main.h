#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>

/** Insert prototypes for printf project below */
int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
char *_strcat(char *dest, char *src);
void reverse(char str[], int lenght);
char *itoa(int num, char *str, int base);
#endif
