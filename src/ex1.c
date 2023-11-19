//
// Created by Diogo António Costa Medeiros on 19/11/2023.
//

#include <stdio.h>

int main() {
    int num1, num2;

    printf("1.º número: ");
    scanf("%d", &num1);

    printf("2.º número: ");
    scanf("%d", &num2);

    const int soma = num1 + num2;
    printf("Soma: %d\n", soma);

    const double media = soma / 2.0;
    printf("Média: %f\n", media);

    return 0;
}
