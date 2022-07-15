#include "main.h"
/**
 * _itos - makes an int a string
 * @div: multiple of 10
 * @length: length of number
 * @n: number to convert to string
 * Return: string
 **/
char *_itos(int div, int length, int n)
{
char *s;
int m = 0;
s = malloc(sizeof(char) * length + 2);
if (s == NULL)
return (NULL);
if (n < 0)
{
s[0] = '-';
m++;
}
while (n < 0)
{
s[m] = ((n / div) * -1 + '0');
n = n % div;
div /= 10;
m++;
}
while (div >= 1)
{
s[m] = ((n / div) +'0');
n = n % div;
div /= 10;
m++;
}
s[m] = '\0';
return (s);
}
/**
 * print_d - gets length to put in _itos
 * @list: takes arg
 * Return: integar string
 **/
char *print_d(va_list list)
{
int length, div, n, temp;
n = va_arg(list, int);
temp = n;
length = 0;
div = 1;
if (n == 0)
{
length++;
return (_itos(div, length, n));
}
while (temp != 0)
{
length += 1;
if (length > 1)
div *= 10;
temp /= 10;
}
return (_itos(div, length, n));
}
