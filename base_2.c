#include "main.h"
/**
 * base_two - convert int to binary
 * @list: int to change
 * Return: string with binary
 */
char *base_two(va_list list)
{
int j = 0, bin = 1;
int i, k;
char *s;
k = va_arg(list, int);
i = k;
s = malloc(sizeof(char) * 33);
if (s == NULL)
return (NULL);
if (k < 0)
{
s[0] = 1 + '0';
j++;
k *= -1;
i *= -1;
}
while (k > 1)
{
k /= 2;
bin *= 2;
}
while (bin > 0)
{
s[j++] = (i / bin + '0');
i %= bin;
bin /= 2;
}
s[j] = '\0';
return (s);
}
