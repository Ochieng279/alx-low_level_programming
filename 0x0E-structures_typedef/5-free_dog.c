#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - function that free dogs
 *@d: the dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
