#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates and initializes a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: null if unsuccessful or pointer to the dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d = malloc(sizeof(dog_t));
if (d == NULL)
{
return (NULL);
}
if (name == NULL || owner == NULL)
{
free(d);
return (NULL);
}
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
