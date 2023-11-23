//
// Created by Diogo António Costa Medeiros on 19/11/2023.
//


#include <stdio.h>

// Protótipo da função fatorial (declaração)
unsigned long fatorial(int n);

int main() {
    int num;

    printf("Insira um número: ");
    scanf("%d", &num);

    // Verifica se o número é positivo
    // Retorna 1 para indicar que o programa terminou com erros
    if (num < 0) {
        printf("O número tem de ser positivo!\n");
        return 1;
    }

    // Calcula o fatorial do número
    const unsigned long fat = fatorial(num);
    printf("O fatorial de %d é %lu\n", num, fat);

    return 0;
}

// Função fatorial (definição)
unsigned long fatorial(const int n) {
    unsigned long fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}
