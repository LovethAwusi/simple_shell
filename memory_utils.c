#include "loveth.h"

/**
* _memcpy - copies inf. b/t void pointers
* @newptr: The destination of the pointer
* @ptr: source  of pointer
* @size: size of new pointer
*
* Return: none
*/
void _memcpy(void *newptr, const void *ptr, unsigned int size)
{
char *char_ptr = (char *)ptr;
char *char_newptr = (char *)newptr;
unsigned int i;

for (i = 0; i < size; i++)
char_newptr[i] = char_ptr[i];
}

/**
* _realloc - reallocates memo block
* @ptr: pointer to previously allocated memo block
* @old_size: size of bytes of the  allocated space of pointer
* @new_size: new size of the bytes of the new memo block
*
* Return: ptr.
* if new_size == old_size, returns ptr without changes.
* if malloc fails, returns NULL.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *newptr;

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
return (ptr);

newptr = malloc(new_size);
if (newptr == NULL)
return (NULL);

if (new_size < old_size)
_memcpy(newptr, ptr, new_size);
else
_memcpy(newptr, ptr, old_size);

free(ptr);
return (newptr);
}

/**
* _reallocdp - reallocates  memory block of the double pointer
* @ptr: previously allocated double pointer to the memory block
* @old_size: size byte of the allocated space of ptr.
* @new_size: new sizw byte of the new memory block.
*
* Return: pointer
* if new_size == old_size, retun pointer without change
* if malloc fails, returns NULL.
*/
char **_reallocdp(char **ptr, unsigned int old_size, unsigned int new_size)
{
char **newptr;
unsigned int i;

if (ptr == NULL)
return (malloc(sizeof(char *) * new_size));

if (new_size == old_size)
return (ptr);

newptr = malloc(sizeof(char *) * new_size);
if (newptr == NULL)
return (NULL);

for (i = 0; i < old_size; i++)
newptr[i] = ptr[i];

free(ptr);

return (newptr);
}
