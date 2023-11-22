//
// Created by Diogo António Costa Medeiros on 19/11/2023.
//

#include <stdio.h>
#include "helper.h"

int main() {
    char nome[50];

    printf("Nome do ficheiro: ");
    read_string(nome, 50);

    FILE* f = fopen(nome, "r");

    if (f == NULL) {
        printf("Erro ao abrir o ficheiro %s\n", nome);
        return 1;
    }

    while (!feof(f)) {
        char linha[100];
        fgets(linha, 100, f);
        printf("%s", linha);
    }

    fclose(f);
}
