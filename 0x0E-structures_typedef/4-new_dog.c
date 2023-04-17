#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: pointer to new dog struct or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d = malloc(sizeof(*new_d));

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;

	return (new_d);
}
