#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _putchar(char *str)
{
int index = 0;

while (str[index] != '\0')
{
_putchar(str[index]);
index++;
}
_putchar('\n');
}
