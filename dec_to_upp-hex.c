#include "main.h"
/**
 * print_upx - prints a decimal in uppercase hexadecimal
 * @list: The character to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_upx(va_list list, char *buf, unsigned int ibuf)
{
int int_input, i, isnegative, count, first_digit;
char *hexadecimal, *binary;
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
hexadecimal = malloc(sizeof(char) * (8 + 1));
hexadecimal = fill_hex_array(binary, hexadecimal, 1, 8);
for (first_digit = i = count = 0; hexadecimal[i]; i++)
{
if (hexadecimal[i] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
ibuf = check_buf(buf, hexadecimal[i], ibuf);
count++;
}
}
free(binary);
free(hexadecimal);
return (count);
}
/**
 * print_nupx - prints number in uppercase hex
 * @list: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_nupx(va_list list, char *buf, unsigned int ibuf)
{
int int_input, i, isnegative, count, first_digit;
char *hexadecimal, *binary;
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
ibuf = check_buf(buf, 'X', ibuf);
binary = malloc(sizeof(char) * (32 + 1));
binary = fill_binary_array(binary, int_input, isnegative, 32);
hexadecimal = malloc(sizeof(char) * (8 + 1));
hexadecimal = fill_hex_array(binary, hexadecimal, 1, 8);
for (first_digit = i = count = 0; hexadecimal[i]; i++)
{
if (hexadecimal[i] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
ibuf = check_buf(buf, hexadecimal[i], ibuf);
count++;
}
}
free(binary);
free(hexadecimal);
return (count + 2);
}
/**
 * print_lupx - prints a long decimal in uppercase hexadecimal
 * @list: The character to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_lupx(va_list list, char *buf, unsigned int ibuf)
{
long int int_input, i, isnegative, count, first_digit;
char *hexadecimal, *binary;
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
hexadecimal = malloc(sizeof(char) * (16 + 1));
hexadecimal = fill_hex_array(binary, hexadecimal, 1, 16);
for (first_digit = i = count = 0; hexadecimal[i]; i++)
{
if (hexadecimal[i] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
ibuf = check_buf(buf, hexadecimal[i], ibuf);
count++;
}
}
free(binary);
free(hexadecimal);
return (count);
}
/**
 * print_sh_upx - prints a short decimal in uppercase hexadecimal
 * @list: The character to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_sh_upx(va_list list, char *buf, unsigned int ibuf)
{
short int int_input, i, isnegative, count, first_digit;
char *hexadecimal, *binary;
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
hexadecimal = malloc(sizeof(char) * (4 + 1));
hexadecimal = fill_hex_array(binary, hexadecimal, 1, 4);
for (first_digit = i = count = 0; hexadecimal[i]; i++)
{
if (hexadecimal[i] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
ibuf = check_buf(buf, hexadecimal[i], ibuf);
count++;
}
}
free(binary);
free(hexadecimal);
return (count);
}
