#include <stdlib.h>
#include "main.h"

/**
* *_realloc - A function that reallocates a memory block using malloc and free
* @ptr: A pointer to the memory previsouly allocated by malloc
* @old_size: size in byte of the allocated space for ptr
* @new_size: new size in bytes of the new memory block
* Return: A pointer to the newly allocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int t;

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
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (t = 0; t < new_size; t++)
			ptr1[t] = old_ptr[t];
	}
	if (new_size > old_size)
	{
		for (t = 0; t < old_size; t++)
			ptr1[t] = old_ptr[t];
	}
	free(ptr);
	return (ptr1);
}
