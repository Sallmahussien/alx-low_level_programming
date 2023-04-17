#include "dog.h"

int _strlen(char *str);
char *_srtcpy(char *dest, char *src);

/**
 * _strlen - claculate length of string.
 * @str: string.
 * Return: string length)
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * _strcpy: copies a string from source to destination.
 * @dest: destination.
 * @src: source.
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: pointer to new dog struct or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	new_d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}

	new_d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}

	new_d->name = _strcpy(new_d->name, name);
	new_d->age = age;
	new_d->owner = _strcpy(new_d->owner, owner);

	return (new_d);
}
