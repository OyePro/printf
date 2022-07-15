#include "main.h"
/**
 * rot13 - encrypts string with rot13
 * @list: string to change
 * Return: modified string
 */
char *rot13(va_list list)
{
int i = 0;
char *str;
char *new_str;
str = va_arg(list, char *);
new_str = malloc(sizeof(char) * (_strlen(str) + 1));
if (new_str == NULL)
return (NULL);
while (str[i] != '\0')
{
if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
{
new_str[i] = str[i] + 13;
}
else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
{
new_str[i] = str[i] - 13;
}
else
(new_str[i] = str[i]);
i++;
}
new_str[i] = '\0';
return (new_str);
}
