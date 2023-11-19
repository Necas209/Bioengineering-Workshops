//
// Created by Diogo António Costa Medeiros on 19/11/2023.
//

#include <stdio.h>
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

    int* arr = malloc(num * sizeof(int));
    for (int i = 0; i < num; ++i) {
        arr[i] = rand() % 100;
        printf("%dº elemento: %d\n", i + 1, arr[i]);
    }

    free(arr);
    return 0;
}
