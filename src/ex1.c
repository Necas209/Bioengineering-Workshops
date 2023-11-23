//
// Created by Diogo António Costa Medeiros on 19/11/2023.
//

#include <stdio.h>

int main() {
    // Declara duas variáveis inteiras
    int num1, num2;

    // Solicita ao utilizador o primeiro número
    printf("1.º número: ");
    // Lê o primeiro número do utilizador
    // %d indica que é um inteiro, &num1 indica que o valor lido deve ser guardado na variável num1
    scanf("%d", &num1);

    printf("2.º número: ");
    scanf("%d", &num2);

    const int soma = num1 + num2;
    printf("Soma: %d\n", soma);

    // Calcula a média dos dois números (2.0 é um double)
    const double media = soma / 2.0;
    // Imprime a média na consola (%lf indica que é um double)
    printf("Média: %lf\n", media);

    return 0;
}