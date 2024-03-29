#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog structure and its associated memory.
 * @d: Pointer to the dog_t structure to free.
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

