#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog abstraction
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *source);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
