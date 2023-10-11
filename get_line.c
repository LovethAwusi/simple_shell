#include "loveth.h"

/**
* bring_line - assigns line value
* @lineptr: Buffer store input str
* @buffer: str that is been called to line
* @n: size of d line
* @j: size of d buffer
*/
void bring_line(char **lineptr, size_t *n, char *buffer, size_t j)
{

if (*lineptr == NULL)
{
if  (j > BUFSIZE)
*n = j;

else
*n = BUFSIZE;
*lineptr = buffer;
}
else if (*n < j)
{
if (j > BUFSIZE)
*n = j;
else
*n = BUFSIZE;
*lineptr = buffer;
}
else
{
_strcpy(*lineptr, buffer);
free(buffer);
}
}
/**
* get_line - Read input from the stream
* @lineptr: buffer which stores input
* @n: size of line
* @stream: stream to read it
* Return: no of bytes
*/
ssize_t get_line(char **lineptr, size_t *n, FILE *stream)
{
int i;
static ssize_t input;
ssize_t retval;
char *buffer;
char t = 'z';

if (input == 0)
fflush(stream);
else
return (-1);
input = 0;

buffer = malloc(sizeof(char) * BUFSIZE);
if (buffer == 0)
return (-1);
while (t != '\n')
{
i = read(STDIN_FILENO, &t, 1);
if (i == -1 || (i == 0 && input == 0))
{
free(buffer);
return (-1);
}
if (i == 0 && input != 0)
{
input++;
break;
}
if (input >= BUFSIZE)
buffer = _realloc(buffer, input, input + 1);
buffer[input] = t;
input++;
}
buffer[input] = '\0';
bring_line(lineptr, n, buffer, input);
retval = input;
if (i != 0)
input = 0;
return (retval);
}
