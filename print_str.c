#include "main.h"
/**
 * print_str - writes the string to stdout
 * @list: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_str(va_list list, char *buf, unsigned int ibuf)
{
char *str;
unsigned int i;
char nill[] = "(null)";
str = va_arg(list, char *);
if (str == NULL)
{
for (i = 0; nill[i]; i++)
ibuf = check_buf(buf, nill[i], ibuf);
return (6);
}
for (i = 0; str[i]; i++)
ibuf = check_buf(buf, str[i], ibuf);
return (i);
}
