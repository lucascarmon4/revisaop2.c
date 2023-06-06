#include <stdio.h>
#include <string.h>

int main() {
    int i,j=0;

    char cons[30];
    do{
        strcpy(cons, "");
        char w[30];
        printf("Digite uma palavra: ");
        scanf(" %s", w);
        for(i=0;i<strlen(w);i++) {
            w[i] = tolower(w[i]);
            if(w[i] != 'a' && w[i] != 'e' && w[i] != 'i' && w[i] != 'o' && w[i] != 'u') {
                cons[j] = w[i];
                j++;
            }
        }
        cons[j] = '\0';
        j=0;
        if(strlen(cons) != 0) printf("%s\n", cons);
    } while(strlen(cons) != 0);
    return 0;
}
