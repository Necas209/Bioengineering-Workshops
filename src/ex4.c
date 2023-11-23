//
// Created by Diogo António Costa Medeiros on 22/11/2023.
//

#include <stdio.h>

// Protótipo da função troca (declaração)
void troca(int* a, int* b);

int main() {
    // Declara duas variáveis inteiras
    int a = 5;
    int b = 10;

    // Imprime os valores das variáveis antes da troca
    printf("a = %d, b = %d\n", a, b);
    // Troca os valores das variáveis
    // &a indica o endereço de memória da variável a
    troca(&a, &b);
    // Imprime os valores das variáveis depois da troca
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

// Função troca (definição)
// Recebe dois apontadores para inteiros
void troca(int* a, int* b) {
    const int tmp = *a;
    *a = *b;
    *b = tmp;
}