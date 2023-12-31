#include "main.h"
#include<stdlib.h>
/**
 * *_realloc - reallocates memory block
 * @ptr: pointer
 * @old_size: size in bytes
 * @new_size: new size in bytes
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;

	char *old_ptr;

	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!ptr)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			ptr1[x] = old_ptr[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			ptr1[x] = old_ptr[x];
	}
	free(ptr);
	return (ptr1);
}
