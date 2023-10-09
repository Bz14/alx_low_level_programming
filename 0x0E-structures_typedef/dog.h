#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure to represent dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: this structure define a dog with properties name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
