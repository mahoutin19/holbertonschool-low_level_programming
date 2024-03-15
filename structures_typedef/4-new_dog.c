#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new struct of type dog
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * Return: returns pointer to buffer of datatype dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int n_len = 0, o_len = 0, index;
dog_t *doggy;

while (name[n_len++])
while (owner[o_len++])
doggy = malloc(sizeof(dog_t));

if (doggy == NULL)
return (NULL);

doggy->name = malloc(n_len * sizeof(char));
if (doggy->name == NULL)
{
free(doggy);
return (NULL);
}
for (index = 0; index < n_len - 1; index++)
doggy->name[index] = name[index];
doggy->name[index] = '\0';

doggy->age = age;

doggy->owner = malloc(o_len * sizeof(char));
if (doggy->owner == NULL)
{
free(doggy->name);
free(doggy);
return (NULL);
}
for (index = 0; index < o_len - 1; index++)
doggy->owner[index] = owner[index];
doggy->owner[index] = '\0';

return (doggy);
}
