#include "function_pointers.h"
/**
 *print_name - prints the name
 *@name: name from the pointer
 *@f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

