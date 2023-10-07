#include "main.h"

/**
* _strdup - duplicates string in heap memo.
* @s: Type xter pointer string
* Return: duplicated string
*/
char *_strdup(const char *s)
{
char *new;
size_t len;

len = _strlen(s);
new = malloc(sizeof(char) * (len + 1));
if (new == NULL)
return (NULL);
_memcpy(new, s, len + 1);
return (new);
}

/**
* _strlen - Returns string length
* @s: Type character pointer
* Return: 0
*/
int _strlen(const char *s)
{
int len;

for (len = 0; s[len] != 0; len++)
{
}
return (len);
}

/**
* cmp_chars - compare xter of string
* @str: input d string
* @delim: del.
*
* Return: 1 if are equals, 0 if not.
*/
int cmp_chars(char str[], const char *delim)
{
unsigned int i, j, k;

for (i = 0, k = 0; str[i]; i++)
{
for (j = 0; delim[j]; j++)
{
if (str[i] == delim[j])
{
k++;
break;
}
}
}
if (i == k)
return (1);
return (0);
}

/**
* _strtok - split string by some del.
* @str: d input string
* @delim: delimetre
*
* Return: Splitted sting
*/
char *_strtok(char str[], const char *delim)
{
static char *splitted, *str_end;
char *str_start;
unsigned int i, bool;

if (str != NULL)
{
if (cmp_chars(str, delim))
return (NULL);
splitted = str; /*Store first address*/
i = _strlen(str);
str_end = &str[i]; /*Store last address*/
}
str_start = splitted;
if (str_start == str_end) /*Reaching the end*/
return (NULL);

for (bool = 0; *splitted; splitted++)
{
/*Breaking loop finding the next token*/
if (splitted != str_start)
if (*splitted && *(splitted - 1) == '\0')
break;
/*Replacing delimiter for null char*/
for (i = 0; delim[i]; i++)
{
if (*splitted == delim[i])
{
*splitted = '\0';
if (splitted == str_start)
str_start++;
break;
}
}
if (bool == 0 && *splitted) /*Str != Delim*/
bool = 1;
}
if (bool == 0) /*Str == Delim*/
return (NULL);
return (str_start);
}

/**
* _isdigit - define if string passed is no
*
* @s: input the sting
* Return: 1 if string is no.0 otherwise
*/
int _isdigit(const char *s)
{
unsigned int i;

for (i = 0; s[i]; i++)
{
if (s[i] < 48 || s[i] > 57)
return (0);
}
return (1);
}
