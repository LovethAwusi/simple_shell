#include "main.h"

/**
* _strcat - concatenat 2 strings
* @dest: xter pointer of d string
* @src: costant xter pointer of the source of string
* Return: d dest
*/
char *_strcat(char *dest, const char *src)
{
int i;
int j;

for (i = 0; dest[i] != '\0'; i++)
;

for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}

dest[i] = '\0';
return (dest);
}
/**
* *_strcpy - Copies d sring pointed
* @src: Type xter pointer of source str.
* @dest: Type character pointer of the dest
* Return: d dest
*/
char *_strcpy(char *dest, char *src)
{

size_t a;

for (a = 0; src[a] != '\0'; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';

return (dest);
}
/**
* _strcmp - Funct.which compares 2 strngs
* @s1: typ of str
* @s2: type of the str compared
* Return: 0
*/
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] == s2[i] && s1[i]; i++)
;

if (s1[i] > s2[i])
return (1);
if (s1[i] < s2[i])
return (-1);
return (0);
}
/**
* _strchr - locate xter in string
* @s: string
* @c: xter
* Return: pointer to first occurrence of  char C
*/
char *_strchr(char *s, char c)
{
unsigned int i = 0;

for (; *(s + i) != '\0'; i++)
if (*(s + i) == c)
return (s + i);
if (*(s + i) == c)
return (s + i);
return ('\0');
}
/**
* _strspn - gets length of  prefix substring
* @s: The init segment
* @accept: D accepted byte
* Return: no of accepted bytes
*/
int _strspn(char *s, char *accept)
{
int i, j, bool;

for (i = 0; *(s + i) != '\0'; i++)
{
bool = 1;
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
{
bool = 0;
break;
}
}
if (bool == 1)
break;
}
return (i);
}
