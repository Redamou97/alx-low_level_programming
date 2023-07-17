#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog attrubates
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * _dog - Typedef for dog structure
 */
typedef struct dog _dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
_dog *new_dog(char *name, float age, char *owner);
void free_dog(_dog *d);

#endif
