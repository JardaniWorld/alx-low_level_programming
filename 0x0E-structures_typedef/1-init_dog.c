#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - This function initializes a variable of type
 * struct dog
 *
 * @d: A variable
 * @name: A variable
 * @age: A variable
 * @owner: A variable
 *
 * Return: nothing to return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
	;
}
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
