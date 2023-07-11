#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - to let dogs free
 *dog_t : structure of the dogs
 *@d: pointer to the structure
 */
void free_dog(dog_t *d)
{

	free(d->name);
	free(d->owner);
	free(d);

}
