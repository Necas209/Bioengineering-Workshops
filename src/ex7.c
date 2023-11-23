//
// Created by Diogo António Costa Medeiros on 19/11/2023.
//

#include <stdio.h>

int main() {
    // Lê o nome do ficheiro
    char nome[50];
    printf("Nome do ficheiro: ");
    scanf("%[^\n]", nome);

    // Abre o ficheiro para leitura (r)
    FILE* f = fopen(nome, "r");

    // Verifica se o ficheiro foi aberto com sucesso
    if (f == NULL) {
        printf("Erro ao abrir o ficheiro %s\n", nome);
        return 1;
    }

    // Lê o ficheiro linha a linha
    // A função feof(f) retorna 0 enquanto não for atingido o fim do ficheiro
    while (!feof(f)) {
        // A função getline() lê uma linha do ficheiro
        // O primeiro argumento é um apontador para um array de caracteres
        // O segundo argumento é um apontador para um inteiro que indica o tamanho do array
        // O terceiro argumento é o ficheiro
        char* linha = NULL;
        size_t n = 0;
        getline(&linha, &n, f);
        // Imprime a linha lida
        printf("%s", linha);
    }

    fclose(f);
}
