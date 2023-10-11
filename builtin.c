#include "loveth.h"

/**
* get_builtin - builti which passes  the cmd ind arg
* @cmd: cmd
* Return: funct. pointer of the builtin md
*/
int (*get_builtin(char *cmd))(data_shell *)
{
builtin_t builtin[] = {
{ "env", _env },
{ "exit", exit_shell },
{ "setenv", _setenv },
{ "unsetenv", _unsetenv },
{ "cd", cd_shell },
{ "help", get_help },
{ NULL, NULL }
};
int i;

for (i = 0; builtin[i].name; i++)
{
if (_strcmp(builtin[i].name, cmd) == 0)
break;
}

return (builtin[i].f);
}
