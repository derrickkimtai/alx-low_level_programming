#include <stdio.h>
/**8main -main function
 *
 * Return: always 0
 */
int main(void)
{
int i;
char j;
for (i = 0; i < 10; i++)
putchar(i + '0');
for (j = 'a'; j <= 'f'; j++)
putchar(j);
return (0);
}
