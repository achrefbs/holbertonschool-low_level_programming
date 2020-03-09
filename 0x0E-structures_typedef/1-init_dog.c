#include "dog.h"
/**
 *init_dog -  a function that initialize a variable of type struct dog
 *@d : pointer to struct dog
 *@name : pointer to string
 *@age : float
 *@owner : pointer to string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;
	d->name = *name;
	d->age = age;
	d->owner = *owner;
	return (d);
}
