#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - new  dog
 *@name : name of the new pointer
 *@age: age of the new dog
 *@owner: owner of the new dog
 *Return: new dog initializes
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int str1, str2;
	dog_t *new_dog;

	str1 = strlen(name);
	str2 = strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(str1 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->owner = malloc(str2 + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
