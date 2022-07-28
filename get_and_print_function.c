#include "main.h"
/**
 * get_func - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*get_func(const char *s, int index))(va_list, char *, unsigned int)
{
print keys[] = {
{"c", print_char}, {"s", print_str}, {"i", print_int}, {"d", print_int},
{"b", base_two}, {"u", print_unt}, {"o", print_oct}, {"x", base_16},
{"X", print_upx}, {"S", print_usr}, {"p", print_add}, {"li", print_lint},
{"ld", print_lint}, {"lu", print_lunt}, {"lo", print_loct}, {"lx", base_l16},
{"#x", base_n16}, {"#X", print_nupx}, {"#i", print_int}, {"#d", print_int},
{"#u", print_unt}, {"+i", print_int_plus}, {"+d", print_int_plus},
{"+o", print_oct}, {"+x", base_16}, {"+X", print_upx}, {" i", print_sint},
{" d", print_sint}, {" u", print_unt}, {" o", print_oct}, {" x", base_16},
{" X", print_upx}, {"R", rot13}, {"r", print_rev}, {"%", print_prg},
{" +d", print_int_plus}, {"lX", print_lupx}, {"hi", print_sh_int},
{"hd", print_sh_int}, {"hu", print_sh_unt}, {"ho", print_sh_oct},
{"hx", base_s16}, {"hX", print_sh_upx}, {"#o", print_num_oct},
{"+ i", print_int_plus}, {"+ d", print_int_plus}, {" %", print_prg},
{"+u", print_unt}, {" +i", print_int_plus}, {".6d", print_sh_unt},
{"6d", print_int}, {"6i", print_int}, {"6u", print_unt}, {"6o", print_oct},
{"6x", base_16}, {"6X", print_upx}, {"6c", print_char}, {"6s", print_str},
{"*d", print_int}, {"*i", print_int}, {"*u", print_unt}, {"*o", print_oct},
{"*x", base_16}, {"*X", print_upx}, {"*c", print_char}, {"*s", print_str},
{"l", print_prg}, {"h", print_prg}, {NULL, NULL}
};
int i = 0, j = 0, f_index;
f_index = index;
while (keys[i].arg_id)
{
if (s[index] == keys[i].arg_id[j])
{
if (keys[i].arg_id[j + 1] != '\0')
index++, j++;
else
break;
}
else
{
j = 0;
i++;
index = f_index;
}
}
return (keys[i].func);
}
/**
 * print_func - returns the amount of identifiers.
 * @s: argument indentifier
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */
int print_func(const char *s, int index)
{
print keys[] = {
{"c", print_char}, {"s", print_str}, {"i", print_int}, {"d", print_int},
{"b", base_two}, {"u", print_unt}, {"o", print_oct}, {"x", base_16},
{"X", print_upx}, {"S", print_usr}, {"p", print_add}, {"li", print_lint},
{"ld", print_lint}, {"lu", print_lunt}, {"lo", print_loct}, {"lx", base_l16},
{"#x", base_n16}, {"#X", print_nupx}, {"#i", print_int}, {"#d", print_int},
{"#u", print_unt}, {"+i", print_int_plus}, {"+d", print_int_plus},
{"+o", print_oct}, {"+x", base_16}, {"+X", print_upx}, {" i", print_sint},
{" d", print_sint}, {" u", print_unt}, {" o", print_oct}, {" x", base_16},
{" X", print_upx}, {"R", rot13}, {"r", print_rev}, {"%", print_prg},
{" +d", print_int_plus}, {"lX", print_lupx}, {"hi", print_sh_int},
{"hd", print_sh_int}, {"hu", print_sh_unt}, {"ho", print_sh_oct},
{"hx", base_s16}, {"hX", print_sh_upx}, {"#o", print_num_oct},
{"+ i", print_int_plus}, {"+ d", print_int_plus}, {" %", print_prg},
{"+u", print_unt}, {" +i", print_int_plus}, {".6d", print_lunt},
{"6d", print_int}, {"6i", print_int}, {"6u", print_unt}, {"6o", print_oct},
{"6x", base_16}, {"6X", print_upx}, {"6c", print_char}, {"6s", print_str},
{"*d", print_int}, {"*i", print_int}, {"*u", print_unt}, {"*o", print_oct},
{"*x", base_16}, {"*X", print_upx}, {"*c", print_char}, {"*s", print_str},
{"l", print_prg}, {"h", print_prg}, {NULL, NULL}
};
int i = 0, j = 0, f_index;
f_index = index;
while (keys[i].arg_id)
{
if (s[index] == keys[i].arg_id[j])
{
if (keys[i].arg_id[j + 1] != '\0')
index++, j++;
else
break;
}
else
{
j = 0;
i++;
index = f_index;
}
}
return (j);
}
