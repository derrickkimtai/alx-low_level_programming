#include "main.h"
/**
 * _isupper - checks for lowercase and uppercase
 * @c:character to be checked
 * Return: 0 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90 )
	{
		return (1);
	}
	else 
	{
		return(0);
	}
}
