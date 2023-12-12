#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *are_you_playing_banjo(const char *name)
{
  char *ending = (tolower(name[0]) == 'r') ? " plays banjo" : " does not play banjo";
  char *message = calloc(strlen(name) + strlen(ending) + 1, 1);
  if (message == NULL)
  {
    return NULL;
  }
  strcpy(message, name);
  return strcat(message, ending);
}