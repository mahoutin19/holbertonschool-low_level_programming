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
	int n_len, o_len, index;
	dog_t *doggy;

	n_len = o_len = 0;
	while (name[n_len++])
		;
	while (owner[o_len++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(n_len * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (index = 0; index < n_len; index++)
		doggy->name[index] = name[index];

	doggy->age = age;

	doggy->owner = malloc(o_len * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (index = 0; index < o_len; index++)
		doggy->owner[index] = owner[index];
	return (doggy);
}
