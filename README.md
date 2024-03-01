## printf
THIS README FILE IS FOR THE "printf" PROJECT GIVEN BY CHASE SPARKS, JOSH MERRICK, AND ASHLEY RAMER. THIS PROJECT WILL BE DUE ON FEBRUARY 26, 2024 AT ATLAS SCHOOL IN TULSA, OKLAHOMA.

## Description
The printf() function is a tool used in C programming used to print a string of output. It allows the output to print exactly what the user wants it to say. You can use it to print out different kinds of information, like numbers or words and print them in a nice, clean way. Some of the printf() specifiers are listed below:

+ %i: Prints an integer.
+ %d: Prints a didget.
+ %c: Prints one single character.
+ %s: Prints a string of characters.
+ %%: Prints a '%' percent sign.

## Project Requirements
+ Allowed editors: vi, vim, emacs
+ All your files will be compiled on Ubuntu 20.04 LTS 
+ All your files should end with a new line
+ A README.md file, at the root of the folder of the project is mandatory
+ Your code should use Betty style. It will be checked using betty-style.pl and betty-doc.pl
+ You are not allowed to use global variables
+ No more than 5 functions per file
+ The prototypes of all your functions should be included in your header file called main.h
+ Project will include a man page called "man_3_printf"
+ Code will be compiled this way: $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

## Example

```

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - point of entry
 * Return: Always 0
 */

int main(void)
{
        printf("Hello, World!");

        return (0);
}

```

Output: "Hello, World!"

## Authorized Functions and Macros
+ write (man 2 write)
+ malloc (man 3 malloc)
+ free (man 3 free)
+ va_start (man 3 va_start)
+ va_end (man 3 va_end)
+ va_copy (man 3 va_copy)
+ va_arg (man 3 va_arg)

## Citations and Sources
+ https://www.youtube.com/watch?v=tGF6Q8tEKPk
+ https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2022/11/d38f88e96a617135804dca9f9c49632751e06aa7.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20240229%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20240229T163819Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=bdba7958be536b347ab42203997ce8d66f02b52e9c3ee243f612e0a776525695+ https://scientyficworld.org/how-to-write-my-own-printf-in-c/
+ https://stackoverflow.com/questions/72935148/i-am-trying-to-create-my-own-printf-function-but-i-dont-know-how-to-include-the
+ https://www.geeksforgeeks.org/how-to-write-your-own-printf-in-c/
+ https://youtu.be/vQXQAaP66gE?si=uCBhLOju-F5T7JDh
