#include <stdio.h>
/**
 * main - main function
 * Return : always (0) succes
 */
int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
putchar(i);
for (i = 'A' ; i <= 'Z' ; i++)
putchar (i);
putchar ('\n');
return (0);
}
