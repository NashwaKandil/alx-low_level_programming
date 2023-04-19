#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * *new_dog - creates a new dog
 * @name: new name
 * @age: new age
 * @owner: new owner
 * Return: data or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *ptr;
	char *cpyname, *cpyowner;

	ptr = malloc(sizeof(dog_t));
	
	i = 0;
	while (name[i] != '\0')
		i++;
	ptr->name = malloc(sizeof(char) * (i + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	j = 0;
	while (owner[j] != '\0')
		j++;
	ptr->owner = malloc(sizeof(char) * (j + 1));
	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	       cpyname[i] = name[i];
	ptr->name = cpyname;

	for (j = 0; owner[j] != '\0'; j++)
		cpyowner[j] = owner[j];
	ptr->owner = cpyowner;

	ptr->age = age;

	return (ptr);
}
