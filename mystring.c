#include "mystring.h"


int my_puts(const char * str) {
    while(*str){
        if (putchar((int)*str) == EOF)
            return EOF;
        str++;
    }
    return 1;
}


char * my_strchr(char * str, int character) {
    size_t res = 0;
    while(*str) {
        if (*str == character) {
            return str;
        }
        str++;
    }
    return NULL;
}


size_t my_strlen(const char * str) {
    size_t len = 0;
    while(*str) {
        len++;
        str++;
    }
    return len;
}


char * my_strcpy(char * dest, const char * source) {
    if (dest == NULL || source == NULL)
        return dest;
    char * temp = dest;
    while(*source) {
        *temp = *source;
        temp++;
        source++;
    }
    *temp = '\0';
    return dest;
}


char * my_strncpy(char * dest, const char * source, size_t num){
    if (dest == NULL || source == NULL)
        return dest;
    char * temp = dest;
    while(*temp && num) {
        if (*source) {
            *temp = *source;
            source++;
        }
        else
            *temp = '\0';
        temp++;
        num--;
    }
    return dest;
}
char * my_strcat(char * dest, const char * source) {
    if (dest == NULL || source == NULL)
        return dest;
    char * temp = dest;
    temp += my_strlen(dest);
    while(*source) {
        *temp = *source;
        temp++;
        source++;
    }
    *temp = '\0';
    return dest;
}
char * my_strncat(char * dest, const char * source, size_t num) {
    if (dest == NULL || source == NULL)
        return dest;

    char * temp = dest;

    temp += my_strlen(dest);
    while(*source && num) {
        *temp = *source;
        temp++;
        source++;
        num--;
    }
    *temp = '\0';
    return dest;
}


char * my_fgets(char * str, size_t count, FILE* stream) {
    if (str == NULL)
        return NULL;

    char * tempstr = str;
    char temp;

    temp = (char)fgetc(stream);
    if(temp == EOF)
        return NULL;
    *tempstr = temp;
    tempstr++;
    count--;
    count -= 2;
    while(count) {
        temp = (char)fgetc(stream);

        if ( temp == EOF)
            return str;

        if(temp == '\n') {
            *tempstr = '\n';
            return str;
        }

        *tempstr = temp;
        tempstr++;
        count--;
    }
    *tempstr = '\0';
    return str;
}


char * my_strdup(const char * str1) {
    char * newchar = (char*)malloc(my_strlen(str1)+1);
    my_strcpy(newchar,str1);
    return newchar;
}

ssize_t my_getline(char **lineptr, size_t *n, FILE *stream) {
    ssize_t nn = 0;
    char temp = (char)fgetc(stream);

    if(*lineptr == NULL) {
        *n = 100;
        *lineptr = (char*)malloc(*n);
    }
    while(temp != '\n'){
        if(temp == EOF)
            return -1;
        if(nn+1 == *n){
            *n *= 2;
            *lineptr = (char *)realloc(*lineptr,*n);
            if(*lineptr == NULL)
                return -1;
        }
        (*lineptr)[nn] = temp;
        nn++;
        temp = (char)fgetc(stream);
    }
    return nn;
}
