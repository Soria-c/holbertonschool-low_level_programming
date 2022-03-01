#include <stdlib.h>
/**
 * create_array - creates and array and initializes it.
 * @size: size of array.
 * @c: character used `to initialize the array.
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;
	if (size == 0)
		return (0);
	s = malloc(size);
	for (i = 0; i < size; i++)
		*(s + i) = c;
	return (s);
}
