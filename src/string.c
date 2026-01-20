#include "string.h"

unsigned int strlen(const char *string) {
  unsigned int s = 0;
  while(string[s]) s++;
  return s;
} 

int strcmp(const char *string1, const char *string2) {
  if(strlen(string1) != strlen(string2)) return 1;

  unsigned int string_size = strlen(string1);

  for(unsigned int i = 0; i!=string_size; i++) 
    if(string1[i] != string2[i]) return 1;

  return 0;
}

int strcpy(char *source, char *destination) {
  unsigned int i = 0;

  while(source[i] != '\0') {
    destination[i] = source[i];
    i++;
  }


  destination[i] = '\0';


  return 0;
}

