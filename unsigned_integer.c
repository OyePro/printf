#include "main.h"
/**
 * print_unt - prints an unsigned int
 * @list: number to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_unt(va_list list, char *buf, unsigned int ibuf)
{
unsigned int int_in, int_temp, i, div;
int_in = va_arg(list, unsigned int);
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
return (i);
}
/**
 * print_lunt - prints a long unsigned int
 * @list: number to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_lunt(va_list list, char *buf, unsigned int ibuf)
{
unsigned long int int_in, int_temp, i, div;
int_in = va_arg(list, unsigned long int);
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
return (i);
}
/**
 * print_sh_unt - prints a short unsigned int
 * @list: number to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_sh_unt(va_list list, char *buf, unsigned int ibuf)
{
unsigned short int int_in, int_temp, i, div;
int_in = va_arg(list, unsigned int);
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
return (i);
}
