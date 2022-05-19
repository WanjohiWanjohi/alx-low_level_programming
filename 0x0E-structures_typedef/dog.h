#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - describes a new dog and its properties
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
#endif
