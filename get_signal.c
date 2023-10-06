#include "main.h"

/**
* get_sigint - Handles d control c prompt
* @sig: Signal handlers
*/
void get_sigint(int sig)
{
(void)sig;
write(STDOUT_FILENO, "\n^-^ ", 5);
}
