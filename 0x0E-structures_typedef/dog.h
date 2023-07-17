#ifndef MY_HEADER_FILE_H
#define MY_HEADER_FILE_H
/**
 * struct dog - the data of the  dog.
 * @name:dogs name.
 * @age:dogs age.
 * @owner:dogs owner name.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
