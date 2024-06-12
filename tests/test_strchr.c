#include "../mystring.h"
#include <string.h>
int main() {
    char str[] = "hello from andrew";
    char * ch = my_strchr(str,'f');
    printf("%c",*ch);
    ch = my_strchr(str,'z');
    printf("%p",ch);
}
