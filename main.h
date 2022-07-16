#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
char *print_string(va_list list);
char *print_char(va_list list);
char *print_d(va_list list);
char *base_two(va_list list);
char *rot13(va_list list);
char *rev_string(va_list list);
char *base_eight(va_list list);

/**
 * struct types - struct
 * @id: identifier of type to print (e.g. c means char)
 * @func: pointer to functions that print according to identifier (e.g. putchar)
 */

typedef struct types
{
char id;
char* (*func)(va_list);
} print;

char* (*get_func(char i))(va_list);
char *create_buffer(void);
void write_buffer(char *buffer, int len, va_list list);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* PRINTF_MAIN_H */
