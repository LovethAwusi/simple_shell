#include "loveth.h"

/**
* cmp_env_name - compares env. var
* with the name passed.
* @nenv: name of env. var
* @name: name sent
*
* Return: 0 if not same. Another if
*/
int cmp_env_name(const char *nenv, const char *name)
{
int i;

for (i = 0; nenv[i] != '='; i++)
{
if (nenv[i] != name[i])
{
return (0);
}
}

return (i + 1);
}

/**
* _getenv - get env. var
* @name: name of env. var.
* @_environ: environ. varv
*
* Return: value of env. var if founf
* In other case, returns NULL.
*/
char *_getenv(const char *name, char **_environ)
{
char *ptr_env;
int i, mov;

/* Initialize ptr_env value */
ptr_env = NULL;
mov = 0;
/* Compare all environment variables */
/* environ is declared in the header file */
for (i = 0; _environ[i]; i++)
{
/* If name and env are equal */
mov = cmp_env_name(_environ[i], name);
if (mov)
{
ptr_env = _environ[i];
break;
}
}

return (ptr_env + mov);
}

/**
* _env - prints env. var.
*
* @datash: important data
* Return: 1 is retruned on sucess
*/
int _env(data_shell *datash)
{
int i, j;

for (i = 0; datash->_environ[i]; i++)
{

for (j = 0; datash->_environ[i][j]; j++)
;

write(STDOUT_FILENO, datash->_environ[i], j);
write(STDOUT_FILENO, "\n", 1);
}
datash->status = 0;

return (1);
}
