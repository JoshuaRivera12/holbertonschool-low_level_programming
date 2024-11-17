#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initialize variable
 *@d: point of start
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *return - null
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
