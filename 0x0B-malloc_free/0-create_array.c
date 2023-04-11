#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to fill in the array
 *
 * Return the array filled
 */

char *create_array(unsigned int size, char c)
{
		
        unsigned int i;
		
	char *s;
		

		
	s = malloc(size * sizeof(char));
		
	if (s == NULL)
		return (NULL);
		
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
		
	return (s);
		
}

