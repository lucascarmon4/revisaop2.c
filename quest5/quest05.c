#include <stdio.h>
#include <stdlib.h>


int main() {
    int i,n;
    printf("Quantidade de alunos: ");
    scanf("%d", &n);
    char names[n][15];
    float notes[n][2];
    float means[n];

    for(i=0;i<n;i++) {
        printf("Nome aluno %d: ", i+1);
        scanf(" %s", names[i]);
        printf("Nota 1: ");
        scanf("%f", &notes[i][0]);
        printf("Nota 2: ");
        scanf("%f", &notes[i][1]);
        means[i] = (notes[i][0] + notes[i][1]) /2;
    }
    FILE *file = fopen("students.csv", "w");
    if(file==NULL) {
        printf("Nao foi possivel abrir o arquivo!\n");
        return 1;
    }
    fprintf(file, "NOME, N1, N2, MEDIA, CONCEITO\n");
    for(i=0;i<n;i++) {
        const concept[15];
        if(means[i] < 7) strcpy(concept,"REPROVADO");
        else strcpy(concept,"APROVADO");
        fprintf(file, "%s, %.1f, %.1f, %1.f, %s\n", names[i], notes[i][0], notes[i][1], means[i], concept);
    }
    fclose(file);
    return 0;
}
