#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A structure representing information of a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
char  *name;
float age;
char *owner;
};
/* function prototypes */
int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
