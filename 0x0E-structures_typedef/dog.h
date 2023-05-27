#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The basic info of a dog
 * @name: First element of the dog
 * @age: Second element of the dog
 * @owner: Third element of the dog
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - A new type definition for struct dog
 */
typedef struct dog dog_t;

#endif
