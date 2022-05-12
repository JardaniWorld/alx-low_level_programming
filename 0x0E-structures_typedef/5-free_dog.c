#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This function frees the members of dogs
 * @d: A pointer to a dog of type dog_t
 * Return: nothing to return
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
