#include "mystring.h"
void my_puts(char * str) {
    printf("%s",str);
}
unsigned long int my_strchr(char * str, const char digit) {
    unsigned long int res = 0;
    while(*str) {
        if (*str == digit) {
            return res;
        }
        res++;
        str++;
    }
    return 0;
}
unsigned long int my_strlen(char * str) {
    unsigned long int len = 0;
    while(*str) {
        len++;
        str++;
    }
    return len;
}
void my_strcpy(char * dest, char * source) {
    while(*source) {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
}
void my_strncpy(char * dest, char * source, size_t num){
    while(*dest && num) {
        if (*source) {
            *dest = *source;
            source++;
        }
        else
            *dest = '\0';
        dest++;
        num--;
    }
    *dest = '\0';
}
void my_strcat(char * dest, char * source) {
    dest += my_strlen(dest);
    while(*source) {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
}
void my_strncat(char * dest, char * source, size_t num) {
    dest += my_strlen(dest);
    while(*source && num) {
        *dest = *source;
        dest++;
        source++;
        num--;
    }
    *dest = '\0';
}
char * my_fgets(char * str, size_t count, FILE* stream) {
    char temp;
    while(count) {
        temp = (char)fgetc(stream);
        if ( temp == EOF)
            return NULL;
        *str = temp;
        str++;
        count--;
    }
    *str = '\0';
    return str;
}
char * my_strdup(char * str1) {
    char * newchar = (char*)malloc(my_strlen(str1)+1);
    my_strcpy(newchar,str1);
    return newchar;
}
