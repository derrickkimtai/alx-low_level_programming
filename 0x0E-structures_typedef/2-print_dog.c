#include <stdio.h>
#include "dog.h"
/**
 *print_dog - to print the dog structure
 *struct dog : structure of the dog
 *@d: pointer rep the struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if  (d->name == NULL)
	{
		printf("Name: (nil) \n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
		if (d->age == 0)
		{
			printf("(nil) \n");
		}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("(nil) \n");
	}
	else
	{
		 printf("Owner: %s\n", d->owner);
	}
}

