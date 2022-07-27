#include "main.h"
/**
 * write_buf - prints buffer
 * @buf: buffer pointer
 * @num: number of bytes to print
 * Return: number of bytes printed.
 */
int write_buf(char *buf, unsigned int num)
{
return (write(1, buf, num));
}
/**
 * check_buf - concatenates the buffer characters
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int check_buf(char *buf, char c, unsigned int ibuf)
{
if (ibuf == 1024)
{
write_buf(buf, ibuf);
ibuf = 0;
}
buf[ibuf] = c;
ibuf++;
return (ibuf);
}
/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
unsigned int i = 0, len = 0, ibuf = 0;
va_list list;
int (*function)(va_list, char *, unsigned int);
char *buffer;
va_start(list, format), buffer = malloc(sizeof(char) * 1024);
if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
return (-1);
if (!format[i])
return (0);
for (i = 0; format && format[i]; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '\0')
{
write_buf(buffer, ibuf), free(buffer), va_end(list);
return (-1);
}
else
{
function = get_func(format, i + 1);
if (function == NULL)
{
if (format[i + 1] == ' ' && !format[i + 2])
return (-1);
check_buf(buffer, format[i], ibuf), len++, i--;
}
else
len += function(list, buffer, ibuf);
i += print_func(format, i + 1);
} i++;
}
else
check_buf(buffer, format[i], ibuf), len++;
for (ibuf = len; ibuf > 1024; ibuf -= 1024)
;
}
write_buf(buffer, ibuf), free(buffer), va_end(list);
return (len);
}
