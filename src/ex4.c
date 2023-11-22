//
// Created by Diogo António Costa Medeiros on 22/11/2023.
//

#include <stdio.h>

void troca(int* a, int* b);

int main() {
    int a = 5;
    int b = 10;

    printf("a = %d, b = %d\n", a, b);
    troca(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void troca(int* a, int* b) {
    const int tmp = *a;
    *a = *b;
    *b = tmp;
}