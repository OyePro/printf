#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct types - struct
 * @arg_id: identifier of types to print
 * @func: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct types
{
	char *arg_id;
	int (*func)(va_list, char *, unsigned int);
} print;

/* printf.c prototypes */
int _printf(const char *format, ...);
unsigned int check_buf(char *buf, char c, unsigned int ibuf);
int write_buf(char *buf, unsigned int num);

/* get_and_print_function.c prototypes */
int (*get_func(const char *s, int index))(va_list, char *, unsigned int);
int print_func(const char *s, int index);

/* decimal to hexadecimal prototypes */
int base_16(va_list list, char *buf, unsigned int ibuf);
int print_upx(va_list list, char *buf, unsigned int ibuf);
int base_l16(va_list list, char *buf, unsigned int ibuf);
int print_lupx(va_list list, char *buf, unsigned int ibuf);
int base_s16(va_list list, char *buf, unsigned int ibuf);
int print_sh_upx(va_list list, char *buf, unsigned int ibuf);
int base_n16(va_list list, char *buf, unsigned int ibuf);
int print_nupx(va_list list, char *buf, unsigned int ibuf);

/* decimal to octal prototypes */
int print_oct(va_list list, char *buf, unsigned int ibuf);
int print_loct(va_list list, char *buf, unsigned int ibuf);
int print_sh_oct(va_list list, char *buf, unsigned int ibuf);
int print_num_oct(va_list list, char *buf, unsigned int ibuf);

/* integers prototypes */
int print_int(va_list list, char *buf, unsigned int ibuf);
int print_unt(va_list list, char *buf, unsigned int ibuf);
int print_lint(va_list list, char *buf, unsigned int ibuf);
int print_lunt(va_list list, char *buf, unsigned int ibuf);
int print_sh_int(va_list list, char *buf, unsigned int ibuf);
int print_sh_unt(va_list list, char *buf, unsigned int ibuf);
int print_int_plus(va_list list, char *buf, unsigned int ibuf);
int print_sint(va_list list, char *buf, unsigned int ibuf);

/* fill_array.c prototypes */
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);

/* other functions prototypes */
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_char(va_list list, char *buf, unsigned int ibuf);
int print_str(va_list list, char *buf, unsigned int ibuf);
int base_two(va_list list, char *buf, unsigned int ibuf);
int print_usr(va_list list, char *buf, unsigned int ibuf);
int print_add(va_list list, char *buf, unsigned int ibuf);
int print_rev(va_list list, char *buf, unsigned int ibuf);
int rot13(va_list list, char *buf, unsigned int ibuf);

#endif /* PRINTF_MAIN_H */
