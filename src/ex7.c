//
// Created by Diogo António Costa Medeiros on 19/11/2023.
//

#include <stdio.h>

int main() {
    char nome[50];

    printf("Nome do ficheiro: ");
    scanf("%[^\n]", nome);

    FILE* f = fopen(nome, "r");

    if (f == NULL) {
        printf("Erro ao abrir o ficheiro %s\n", nome);
        return 1;
    }

    while (!feof(f)) {
        char* linha = NULL;
        size_t n = 0;
        if (getline(&linha, &n, f) == -1) {
            break;
        }
        printf("%s", linha);
    }

    fclose(f);
}
