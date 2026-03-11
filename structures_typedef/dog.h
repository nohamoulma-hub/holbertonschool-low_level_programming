#ifndef DOG_H
#define DOG_H
/**
 * struct dog - définit les informations de base d'un chien
 * @name: nom du chien (chaîne de caractères)
 * @age: âge du chien (nombre flottant)
 * @owner: nom du propriétaire (chaîne de caractères)
 *
 * Description: Une structure regroupant les attributs essentiels pour
 * identifier un chien et son propriétaire dans le programme.
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
dog_t *new_dog(char *name, float age, char *owner);


#endif
