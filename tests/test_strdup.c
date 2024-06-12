#include "../mystring.h"

int main() {
    char str[] = "hello from andrew";
    char * newstr = my_strdup(str);
    printf("%s", newstr);
    free(newstr);
}
