#include "main.h"
/**
 * print_rev - writes the str in reverse
 * @list: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_rev(va_list list, char *buf, unsigned int ibuf)
{
char *str;
unsigned int i;
int j = 0;
char nill[] = "(llun)";
str = va_arg(list, char *);
if (str == NULL)
{
for (i = 0; nill[i]; i++)
ibuf = check_buf(buf, nill[i], ibuf);
return (6);
}
for (i = 0; str[i]; i++)
;
j = i - 1;
for (; j >= 0; j--)
{
ibuf = check_buf(buf, str[j], ibuf);
}
return (i);
}
