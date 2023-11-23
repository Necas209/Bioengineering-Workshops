//
// Created by Diogo António Costa Medeiros on 19/11/2023.
//

#include <stdio.h>
// Inclui a biblioteca stdlib.h para podermos usar a função rand()
#include <stdlib.h>

int main() {
    int num;

    printf("Insira um número: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("O número tem de ser maior que 0!\n");
        return 1;
    }

    // Definir a semente para o gerador de números aleatórios
    srand(42);

    // Alocar memória para um array de inteiros
    // O tamanho do array é definido pelo utilizador
    // O argumento sizeof(int) indica o tamanho de cada elemento do array
    int* arr = malloc(num * sizeof(int));
    for (int i = 0; i < num; ++i) {
        // Gerar um número aleatório entre 0 e 99
        arr[i] = rand() % 100;
        // Imprimir o número gerado
        printf("%dº elemento: %d\n", i + 1, arr[i]);
    }

    free(arr);
    return 0;
}
