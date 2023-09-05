#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *are_you_playing_banjo(const char *name) {
  // Selects message based on starting char
  char *ending = (tolower(name[0]) == 'r') ? " plays banjo" : " does not play banjo";
  // Allocates enough contiguous memory for name and selected message ending
  char *message = calloc(strlen(name) + strlen(ending) + 1, 1);
  // Copies and concatenates ending onto message
  strcpy(message, name);
  return strcat(message, ending);
}