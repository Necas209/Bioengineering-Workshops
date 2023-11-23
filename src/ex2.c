//
// Created by Diogo António Costa Medeiros on 19/11/2023.
//

#include <stdio.h>

int main() {
    int num;

    printf("Número: ");
    scanf("%d", &num);

    // Se o resto da divisão por 2 for 0, então o número é par
    // Caso contrário, o número é ímpar
    if (num % 2 == 0) {
        printf("O número %d é par.\n", num);
    } else {
        printf("O número %d é ímpar.\n", num);
    }

    return 0;
}