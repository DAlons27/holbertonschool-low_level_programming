#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libera memoria asignada
 * @d: estructura dog a liberar
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
