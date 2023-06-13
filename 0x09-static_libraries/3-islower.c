#include "main.h"
/**
 *_islower - checks if the character is a lowercase
 *@c: to be checked if it is a lowercase
 *Return: 1 return true 0 if false
 */
int _islower(int c)
{	
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
