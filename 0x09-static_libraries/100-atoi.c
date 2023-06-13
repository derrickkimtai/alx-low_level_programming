#include "main.h"
/**
 *_atoi - convets the string into an integer
 *@s:input
 *Return: 0
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

    
    if (s[0] == '-' || s[0] == '+') 
    {
        if (s[0] == '-')
            sign = -1;
        i++;
    }
    while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9')) 
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }
    result *= sign;

    return result;
}
