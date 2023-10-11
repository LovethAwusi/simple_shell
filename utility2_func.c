#include "loveth.h"

/**
* aux_help - Help info. for builtin help
* Return: no
*/
void aux_help(void)
{
char *help = "help: help [-dms] [pattern ...]\n";

write(STDOUT_FILENO, help, _strlen(help));
help = "\tDisplay information about builtin commands.\n ";
write(STDOUT_FILENO, help, _strlen(help));
help = "Displays brief summaries of builtin commands.\n";
write(STDOUT_FILENO, help, _strlen(help));
}
/**
* aux_help_alias - Help info. for built-in alias
* Return: no
*/
void aux_help_alias(void)
{
char *help = "alias: alias [-p] [name[=value]...]\n";

write(STDOUT_FILENO, help, _strlen(help));
help = "\tDefine or display aliases.\n ";
write(STDOUT_FILENO, help, _strlen(help));
}
/**
* aux_help_cd - Help info for built-in help
* Return: no
*/
void aux_help_cd(void)
{
char *help = "cd: cd [-L|[-P [-e]] [-@]] [dir]\n";

write(STDOUT_FILENO, help, _strlen(help));
help = "\tChange the shell working directory.\n ";
write(STDOUT_FILENO, help, _strlen(help));
}
