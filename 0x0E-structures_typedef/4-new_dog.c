#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Entry Function
 * @name: char
 * @age: float
 * @owner: char
 * Return: Newdog (SUCCESS)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Newdog;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	Newdog = malloc(sizeof(dog_t));
	if (Newdog == NULL)
		return (NULL);
	Newdog->name = malloc(len1 + 1);
	if (Newdog->name == NULL)
	{
		free(Newdog);
		return (NULL);
	}
	strcpy(Newdog->name, name);

	Newdog->owner = malloc(len2 + 1);
	if (Newdog->owner == NULL)
	{
		free(Newdog->name);
		free(Newdog);
		return (NULL);
	}
	strcpy(Newdog->owner, owner);

	Newdog->age = age;

	return (Newdog);
}
