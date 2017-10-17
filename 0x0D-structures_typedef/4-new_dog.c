#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: struct parameter
 * @age: struct parameter
 * @owner: struct owner
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len, i, j;
	dog_t *dogg;

	len = 0;
	i = 0;

	while (name[len++])
		;
	while (owner[i++])
		;
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	dogg->name = malloc(len * sizeof(dogg->name));
	if (dogg == NULL)
		return (NULL);
	j = 0;
	while (j < len)
	{
		dogg->name[j] = name[j];
		j++;
	}
	dogg->age = age;
	dogg->owner = malloc(i * sizeof(dogg->owner));
	if (dogg == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		dogg->owner[j] = owner[j];
		j++;
	}
	return (dogg);
}
