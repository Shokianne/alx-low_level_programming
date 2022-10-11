#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains a list of elements
 * @name : of type char
 * @age : of type float
 * @owner : of type char
 *
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
