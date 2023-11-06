#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the struct dog to initialize.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
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

