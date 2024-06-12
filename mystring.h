#ifndef MYSTRING_H
#define MYSTRING_H
#include <stdio.h>
#include <stdlib.h>


int my_puts(const char * str);
char * my_strchr(char * str, int character);
size_t my_strlen(const char * str);
char * my_strcpy(char * dest, const char * source);
char * my_strncpy(char * dest, const char * source, size_t num);
char * my_strcat(char * dest, const char * source);
char * my_strncat(char * dest, const char * source, size_t num);
char * my_fgets(char * str, size_t count, FILE* stream);
char * my_strdup(const char * str1);
ssize_t my_getline(char **lineptr, size_t *n, FILE *stream);



#endif // MYSTRING_H
