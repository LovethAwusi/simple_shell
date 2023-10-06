#include "main.h"

/**
* exec_line - find d builtins cmds
*
* @datash: Important data
* Return: 1 is returned on sucess
*/
int exec_line(data_shell *datash)
{
int (*builtin)(data_shell *datash);

if (datash->args[0] == NULL)
return (1);

builtin = get_builtin(datash->args[0]);

if (builtin != NULL)
return (builtin(datash));

return (cmd_exec(datash));
}
