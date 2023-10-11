#include "loveth.h"

/**
* read_line - reads d string input
*
* @i_eof: RV of the getline function
* Return: string input
*/
char *read_line(int *i_eof)
{
char *input = NULL;
size_t bufsize = 0;

*i_eof = getline(&input, &bufsize, stdin);

return (input);
}
