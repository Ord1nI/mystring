#include "../mystring.h"
#include <string.h>
int main() {
    char str[] = "hello from andrew";
    char strr2[] = "hello from andrew";
    char str2[100];
    char str3[100];
    strcpy(str2,str);
    char *dest = my_strcpy(str3,str);
    printf("string: %s\nlen: %lu\n",str2,strlen(str2));
    printf("string: %s\nlen: %lu\n",str3,strlen(str3));
    printf("%p\n%p\n",dest,str3);
    strncpy(str2,str,15);
    my_strncpy(str3,str,15);
    printf("string: %s\nlen: %lu\n",str2,strlen(str2));
    printf("string: %s\nlen: %lu\n",str3,strlen(str3));
    strncpy(str2,strr2,50);
    my_strncpy(str3,strr2,50);
    printf("string: %s\nlen: %lu\n",str2,strlen(str2));
    printf("string: %s\nlen: %lu\n",str3,strlen(str3));
}
