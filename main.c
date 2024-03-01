#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
/**betty compliance!*/
    _printf("%s", "This sentence is retrieved from va_args!\n");
  _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
_printf("css%ccs%scscscs", 'T', "Test");
 _printf(str);
 _printf("man gcc:\n%s", str);
_printf("%");
_printf("%!\n");
_printf("%K\n");





    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
