#include<stdio.h>
#include "dog.h"
/**
* init_dog - Initializes a dog structure
*
* @d: Pointer to a dog structure
* @name: Pointer to a character string representing the dog's name
* @age: The age of the dog
* @owner: Pointer to a character string representing the dog's owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

