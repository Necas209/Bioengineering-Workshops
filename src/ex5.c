//
// Created by Diogo António Costa Medeiros on 19/11/2023.
//

#include <stdio.h>
#include "helper.h"

#define NO_NOTAS 6

struct Aluno {
    char nome[50];
    int numero;
    double notas[NO_NOTAS];
};

double media(const struct Aluno* aluno);

int main() {
    struct Aluno aluno;

    printf("Nome do aluno: ");
    read_string(aluno.nome, 50);

    printf("Numero do aluno: ");
    scanf("%d", &aluno.numero);

    printf("Notas do aluno: ");
    for (int j = 0; j < NO_NOTAS; ++j) {
        scanf("%lf", &aluno.notas[j]);
    }

    printf("Aluno: %s\n", aluno.nome);
    printf("Numero: %d\n", aluno.numero);
    printf("Média: %lf\n", media(&aluno));

    return 0;
}

double media(const struct Aluno* aluno) {
    double media = 0;

    for (int i = 0; i < NO_NOTAS; ++i) {
        media += aluno->notas[i];
    }

    return media / NO_NOTAS;
}
