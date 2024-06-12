#include "../mystring.h"
#include <string.h>
int main() {
    char str[] = "hello from andrew\n";
    char str2[10];
    printf("%lu\n",strlen(str));
    printf("%lu\n",my_strlen(str));
    printf("%lu\n",strlen(str2));
    printf("%lu\n",my_strlen(str2));
}
