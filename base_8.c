#include "main.h"
/**
 * base_eight - convert int to base 8
 * @list: int to change
 * Return: string with octal
 */
char *base_eight(va_list list)
{
int j = 0, oct = 1;
int i, k;
char *s;
k = va_arg(list, int);
i = k;
s = malloc(sizeof(char) * 12);
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
k /= 8;
oct *= 8;
}
while (oct > 0)
{
s[j++] = (i / oct + '0');
i %= oct;
oct /= 8;
}
s[j] = '\0';
return (s);
}
