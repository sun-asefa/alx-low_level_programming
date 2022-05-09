#ifndef STRTYP
#define STRTYP

/**
  *struct dog - structure of a dog.
  *@name: name of dog.
  *@age: age of dog.
  *@owner: owner of dog.
  */
typedef struct dog
{

	char *name;
	float age;
	char *owner;

} dog_t;

#endif
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
