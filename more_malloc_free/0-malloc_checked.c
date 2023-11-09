#include "main.h"

/**
 * malloc_checked - function that allocate memory
 * @b: is a pointer to the memory allocated
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p; 
	p = malloc(b);

	if  (p == NULL)
		exit(98);
	{	
	return(p);
	}
}
