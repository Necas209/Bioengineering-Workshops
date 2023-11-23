//
// Created by Diogo António Costa Medeiros on 19/11/2023.
//

#include <stdio.h>

#define NO_NOTAS 6

// Definição da estrutura Aluno
// A estrutura Aluno tem 3 campos:
// - nome: array de caracteres com 50 elementos
// - numero: inteiro
// - notas: array de doubles com 6 elementos
struct Aluno {
    char nome[50];
    int numero;
    double notas[NO_NOTAS];
};

// Protótipo da função media (declaração)
double media(const struct Aluno* aluno);

int main() {
    // Declara uma variável do tipo Aluno
    struct Aluno aluno;

    // Lê os dados do aluno
    // %[^n] indica que a leitura para quando é encontrado um '\n' (ENTER)
    printf("Nome do aluno: ");
    scanf("%[^\n]", aluno.nome);

    printf("Numero do aluno: ");
    scanf("%d", &aluno.numero);

    // Lê as notas do aluno
    printf("Notas do aluno: ");
    for (int j = 0; j < NO_NOTAS; ++j) {
        scanf("%lf", &aluno.notas[j]);
    }

    // Imprime os dados do aluno
    printf("Aluno: %s\n", aluno.nome);
    printf("Numero: %d\n", aluno.numero);
    printf("Média: %lf\n", media(&aluno));

    return 0;
}

// Função media (definição)
double media(const struct Aluno* aluno) {
    double media = 0;

    for (int i = 0; i < NO_NOTAS; ++i) {
        media += aluno->notas[i];
    }

    return media / NO_NOTAS;
}
