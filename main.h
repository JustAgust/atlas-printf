#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>

/** Insert prototypes for printf project below */
int _printf(const char *format, ...);
void reverse(char str[], int lenght);
char* int_to_str(int num);
char *itoa(int num, char *str, int base);
#endif
