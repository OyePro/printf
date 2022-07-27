#include "main.h"
/**
 * print_oct - prints decimal number in octal
 * @list: input number
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_oct(va_list list, char *buf, unsigned int ibuf)
{
int int_input, i, isnegative, count, first_digit;
char *octal, *binary;
int_input = va_arg(list, int);
isnegative = 0;
if (int_input == 0)
{
ibuf = check_buf(buf, '0', ibuf);
return (1);
}
if (int_input < 0)
{
int_input = (int_input * -1) - 1;
isnegative = 1;
}
binary = malloc(sizeof(char) * (32 + 1));
binary = fill_binary_array(binary, int_input, isnegative, 32);
octal = malloc(sizeof(char) * (11 + 1));
octal = fill_oct_array(binary, octal);
for (first_digit = i = count = 0; octal[i]; i++)
{
if (octal[i] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
ibuf = check_buf(buf, octal[i], ibuf);
count++;
}
}
free(binary);
free(octal);
return (count);
}
/**
 * print_loct - prints long decimal number in octal
 * @list: input number
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_loct(va_list list, char *buf, unsigned int ibuf)
{
long int int_input, i, isnegative, count, first_digit;
char *octal, *binary;
int_input = va_arg(list, long int);
isnegative = 0;
if (int_input == 0)
{
ibuf = check_buf(buf, '0', ibuf);
return (1);
}
if (int_input < 0)
{
int_input = (int_input * -1) - 1;
isnegative = 1;
}
binary = malloc(sizeof(char) * (64 + 1));
binary = fill_binary_array(binary, int_input, isnegative, 64);
octal = malloc(sizeof(char) * (22 + 1));
octal = fill_long_oct_array(binary, octal);
for (first_digit = i = count = 0; octal[i]; i++)
{
if (octal[i] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
ibuf = check_buf(buf, octal[i], ibuf);
count++;
}
}
free(binary);
free(octal);
return (count);
}
/**
 * print_num_oct - print the number in octal begining with zero
 * @list: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_num_oct(va_list list, char *buf, unsigned int ibuf)
{
int int_input, i, isnegative, count, first_digit;
char *octal, *binary;
int_input = va_arg(list, int);
isnegative = 0;
if (int_input == 0)
{
ibuf = check_buf(buf, '0', ibuf);
return (1);
}
if (int_input < 0)
{
int_input = (int_input * -1) - 1;
isnegative = 1;
}
ibuf = check_buf(buf, '0', ibuf);
binary = malloc(sizeof(char) * (32 + 1));
binary = fill_binary_array(binary, int_input, isnegative, 32);
octal = malloc(sizeof(char) * (11 + 1));
octal = fill_oct_array(binary, octal);
for (first_digit = i = count = 0; octal[i]; i++)
{
if (octal[i] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
ibuf = check_buf(buf, octal[i], ibuf);
count++;
}
}
free(binary);
free(octal);
return (count + 1);
}
/**
 * print_sh_oct - prints short decimal number in octal
 * @list: input number
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_sh_oct(va_list list, char *buf, unsigned int ibuf)
{
short int int_input, i, isnegative, count, first_digit;
char *octal, *binary;
int_input = va_arg(list, int);
isnegative = 0;
if (int_input == 0)
{
ibuf = check_buf(buf, '0', ibuf);
return (1);
}
if (int_input < 0)
{
int_input = (int_input * -1) - 1;
isnegative = 1;
}
binary = malloc(sizeof(char) * (16 + 1));
binary = fill_binary_array(binary, int_input, isnegative, 16);
octal = malloc(sizeof(char) * (6 + 1));
octal = fill_short_oct_array(binary, octal);
for (first_digit = i = count = 0; octal[i]; i++)
{
if (octal[i] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
ibuf = check_buf(buf, octal[i], ibuf);
count++;
}
}
free(binary);
free(octal);
return (count);
}
