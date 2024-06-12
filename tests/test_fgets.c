#include "../mystring.h"
int main() {
    FILE * f = fopen("temp","r");
    char str[100];

    my_fgets(str, 10 ,f);
    printf("%s\n", str);

    fclose(f);
    f = fopen("temp", "r");

    my_fgets(str,100,f);
    printf("%s\n", str);
}
