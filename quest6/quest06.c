#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 100
#define MAX_NOME 50

void ordenarMatriz(char matriz[MAX_ALUNOS][MAX_NOME], int tamanho) {
    int i, j;
    char temp[MAX_NOME];

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (strcmp(matriz[j], matriz[j + 1]) > 0) {
                strcpy(temp, matriz[j]);
                strcpy(matriz[j], matriz[j + 1]);
                strcpy(matriz[j + 1], temp);
            }
        }
    }
}

int main() {
    int i = 0;
    FILE *file = fopen("students.csv", "r");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo!\n");
        return 1;
    }

    char matrizNomes[MAX_ALUNOS][MAX_NOME];
    char linha[MAX_NOME];

    fgets(linha, MAX_NOME, file); // SE TIVER CABECALHO

    while (fgets(linha, sizeof(linha), file) != NULL && i < MAX_ALUNOS) {
        char *token = strtok(linha, ",");
        strcpy(matrizNomes[i], token);
        i++;
    }

    fclose(file);

    ordenarMatriz(matrizNomes, i);

    if (i > 0) {
        printf("Primeiro nome: %s\n", matrizNomes[0]);
        printf("Ultimo nome: %s\n", matrizNomes[i - 1]);
    } else {
        printf("Não foram encontrados nomes de alunos no arquivo.\n");
    }

    return 0;
}
