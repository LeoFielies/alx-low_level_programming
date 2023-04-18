#ifndef DOG.H
#define DOG.H

/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: the structis for dog
 */

struct dog
{
	char *name;
	char *age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
