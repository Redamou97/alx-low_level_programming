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
 * _doog - Typedef for dog structure
 */
typedef struct dog _doog;

void init_doog(struct dog *d, char *name, float age, char *owner);
void print_doog(struct dog *d);
_doog *new_doog(char *name, float age, char *owner);
void free_doog(_doog *d);

#endif
