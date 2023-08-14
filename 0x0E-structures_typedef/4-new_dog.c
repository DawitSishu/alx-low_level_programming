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
int size1 = 0, size2 = 0, i, j;
dog_t *d = malloc(sizeof(dog_t));
if (d == NULL)
{
return (NULL);
}
while (name != NULL && name[size1] != '\0')
{
size1++;
}
while (owner != NULL && owner[size2] != '\0')
{
size2++;
}
d->name = malloc((size1 + 1) * sizeof(char));
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner = malloc((size1 + 1) * sizeof(char));
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (i = 0; i < size1; i++)
{
d->name[i] = name[i];
}
for (j = 0; j < size2; j++)
{
d->owner[j] = owner[j];
}
d->name[i] = '\0';
d->owner[j] = '\0';
d->age = age;
return (d);
}
