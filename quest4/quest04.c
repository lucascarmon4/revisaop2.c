#include <stdio.h>

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
    for(i=0;i<n;i++) {
        printf("%s\n", names[i]);
        printf("Media: %.1f ", means[i]);
        if (means[i]<7) printf("(REPROVADO)\n");
        else printf("(APROVADO)\n");
    }
    return 0;
}
