#ifndef MYSTRING_H
#define MYSTRING_H
#include <stdio.h>
#include <stdlib.h>


void my_puts(char * str);
unsigned long int my_strchr(char * str, char digit);
unsigned long int my_strlen(char * str);
void my_strcpy(char * dest, char * source);
void my_strncpy(char * dest, char * source, size_t num);
void my_strcat(char * dest, char * source);
void my_strncat(char * dest, char * source, size_t num);
char * my_fgets(char * str, size_t count, FILE* stream);
char * my_strdup(char * str1);
ssize_t my_getline(char * lineptr,size_t *n,FILE * stream);




#endif // MYSTRING_H
