#include "../mystring.h"
#include <string.h>
int main() {
    char str[] = "hello from andrew";
    char str2[100];
    my_strcpy(str2,str);
    my_strcat(str2," i will rule the world some day");
    printf("%s\n",str2);
    my_strncat(str2,str,5);
    printf("%s\n",str2);
}
