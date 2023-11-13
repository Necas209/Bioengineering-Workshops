#include "stdio.h"

int main() {
    puts("What's your name?");
    char name[20];
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    return 0;
}
