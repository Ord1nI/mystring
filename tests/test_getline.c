#include "../mystring.h"
int main() {
    size_t n = 10;
    char * a = (char*)malloc(n);
    printf("%p\n",a);
    FILE * f = fopen("temp","r");
    my_getline(&a, &n, f);
    fclose(f);
    printf("%p\n",a);
    printf("%s\n",a);
    free(a);
}
