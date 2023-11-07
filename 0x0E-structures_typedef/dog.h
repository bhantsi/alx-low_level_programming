#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's characteristics.
 * @name: The dog's name (a string).
 * @age: The dog's age (a floating-point number).
 * @owner: The dog's owner (a string).
 */
struct dog
{
char *name;
float age;
char *owner;
};
/* Function prototype*/
void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */

