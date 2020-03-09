#ifndef DOG_H
#define DOG_H
/**
 *struct dog - a new type
 *@name : string
 *@age : float
 *@owner : string
 *Description: a new type that contains dog name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
