## C - printf
This is a group task done at ALX Software Engineering School by Olalekan Okewale and Adewuyi Abdul-Azeez Adeyemi while learning C programming language.
=======
This is a group task done at ALX Software engineering by Olalekan Okewale and Adewuyi Abdul-Azeez Adeyemi during the learning of C programming language.

## Requirements
The files will be compiled using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89.
All the files must end with a new line.
The code will be checked using betty-style.pl and betty-doc.pl
Global variables are not allowed.
The files should not contain more than five functions.

## Authorized functions and Macros
```
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
```

## Details

> In this project, we recreated a replicate of the ```printf``` function found in
> the ```stdio.h``` library in the C programming language. This function allows
> us to print any argument given to the standard output or terminal and similar
> printing functions can be found in any programming language. This means we can
> print any combinations of strings, integers, and other different data types.
> The prototype of the printf function is
 
       int _printf(const char *format, ...)
where **format** contains the string that is printed.

### Synopsis
> This repository holds all the code necessary for our custom ```_printf```
> function to run. Our mini-version currently handles conversion specifiers:
> ```c```, ```s```, ```%```, ```d```, ```i```, ```b```, ```o```, ```b```, ```u```, ```x```,
> ```X```, ```p```.
> Unique to our _printf is our ```r```reverse conversion and the ```R``` rot13 conversion.
> In essence, you can print any character, string, integer, or decimal number, 
> reverse your strings, transform any number to binary and octal bases,
> and encrypt your string with rot13 encryption. 

### Description of what each file does:
```
printf.c ---------------------------- holds custom _printf function that performs formatted output conversion and print data
main.h ------------------------ holds prototypes of functions spread across all files
get_and_print_function.c ----- holds functions to get appropriate function, and also returns the amount of identifiers.
dec_to_hexa.c--------------------------- handles %x /  to convert decimal to hexadecimal
dec_to_upp-hex.c--------------------------- handles %X /  to convert decimal to hexadecimal 
print_add.c--------------------------- handles %p to print the address of an input variable
print_prg.c--------------------------- 
print_usr.c--------------------------- handles %S to print string and value of non-printed chars
reverse_strings.c--------------------------- handles %r to write the string to stdout in reverse 
unsigned_integer.c--------------------------- handles %u to print unsigned integer
print_str.c --------------------------- handles %s to print a string of characters
print_chr.c ----------------------------- handles %c to print a single character
print_integer.c -------------------------- handles %d and %i to print (d)ecimal/(i)ntegers in base 10
base_2.c --------------------------- handles %b to convert numbers passed into base 2
dec_to_base_8.c ---------------------------- handles %o to convert numbers passed into base 8
rot13.c------------------------------ handles %R to move each character 13 alphabet letters 
```

### Sample main program inside print.c:
```
int main(void)
{
	_printf("%s %c%drld", "Hello", "W", 0);
	return (0);
}
====================================

(terminal)$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o print
(terminal)$ ./print
Hello W0rld
(terminal)$
```
-----------------

### Authors
Olalekan Okewale and Abdul-Azeez Adewuyi

---------------

#### End
