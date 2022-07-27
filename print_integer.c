#include "main.h"
/**
 * print_int - prints an integer
 * @list: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_int(va_list list, char *buf, unsigned int ibuf)
{
int int_input;
unsigned int int_in, int_temp, i, div, isneg;
int_input = va_arg(list, int);
isneg = 0;
if (int_input < 0)
{
int_in = int_input * -1;
ibuf = check_buf(buf, '-', ibuf);
isneg = 1;
}
else
{
int_in = int_input;
}
int_temp = int_in;
div = 1;
while (int_temp > 9)
{
div *= 10;
int_temp /= 10;
}
for (i = 0; div > 0; div /= 10, i++)
{
ibuf = check_buf(buf, ((int_in / div) % 10) + '0', ibuf);
}
return (i + isneg);
}
/**
 * print_lint - prints a long integer
 * @list: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_lint(va_list list, char *buf, unsigned int ibuf)
{
long int int_input;
unsigned long int int_in, int_temp, i, div, isneg;
int_input = va_arg(list, long int);
isneg = 0;
if (int_input < 0)
{
int_in = int_input * -1;
ibuf = check_buf(buf, '-', ibuf);
isneg = 1;
}
else
{
int_in = int_input;
}
int_temp = int_in;
div = 1;
while (int_temp > 9)
{
div *= 10;
int_temp /= 10;
}
for (i = 0; div > 0; div /= 10, i++)
{
ibuf = check_buf(buf, ((int_in / div) % 10) + '0', ibuf);
}
return (i + isneg);
}
/**
 * print_int_plus - print integer with plus symbol
 * @list: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_int_plus(va_list list, char *buf, unsigned int ibuf)
{
int int_input;
unsigned int int_in, int_temp, i, div;
int_input = va_arg(list, int);
if (int_input < 0)
{
int_in = int_input * -1;
ibuf = check_buf(buf, '-', ibuf);
}
else
{
int_in = int_input;
ibuf = check_buf(buf, '+', ibuf);
}
int_temp = int_in;
div = 1;
while (int_temp > 9)
{
div *= 10;
int_temp /= 10;
}
for (i = 0; div > 0; div /= 10, i++)
{
ibuf = check_buf(buf, ((int_in / div) % 10) + '0', ibuf);
}
return (i + 1);
}
/**
 * print_sh_int - prints a short integer
 * @list: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_sh_int(va_list list, char *buf, unsigned int ibuf)
{
short int int_input;
unsigned short int int_in, int_temp, i, div, isneg;
int_input = va_arg(list, int);
isneg = 0;
if (int_input < 0)
{
int_in = int_input * -1;
ibuf = check_buf(buf, '-', ibuf);
isneg = 1;
}
else
{
int_in = int_input;
}
int_temp = int_in;
div = 1;
while (int_temp > 9)
{
div *= 10;
int_temp /= 10;
}
for (i = 0; div > 0; div /= 10, i++)
{
ibuf = check_buf(buf, ((int_in / div) % 10) + '0', ibuf);
}
return (i + isneg);
}
/**
 * print_sint - prints int begining with space
 * @list: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_sint(va_list list, char *buf, unsigned int ibuf)
{
int int_input;
unsigned int int_in, int_temp, i, div;
int_input = va_arg(list, int);
if (int_input < 0)
{
int_in = int_input * -1;
ibuf = check_buf(buf, '-', ibuf);
}
else
{
int_in = int_input;
ibuf = check_buf(buf, ' ', ibuf);
}
int_temp = int_in;
div = 1;
while (int_temp > 9)
{
div *= 10;
int_temp /= 10;
}
for (i = 0; div > 0; div /= 10, i++)
{
ibuf = check_buf(buf, ((int_in / div) % 10) + '0', ibuf);
}
return (i + 1);
}
