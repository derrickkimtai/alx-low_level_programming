#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - prints a name
 *@name: name of the user
 *@f:name
 *Return: 0 succes
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
