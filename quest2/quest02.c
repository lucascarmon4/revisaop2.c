#include <stdio.h>

int main() {
    int i,n;
    int cont=0;
    printf("Entre com a quantidade: ");
    scanf("%d", &n);
    float a[n];
    for(i=0;i<n;i++) {
        scanf("%f", &a[i]);
    }
    printf("Maiores que 10.5 -> ");
    for(i=0;i<n;i++) {
        if(a[i]>10.5) {
            if(cont!=0) printf(" - ");
            printf("%.2f", a[i]);
            cont++;
        }
    }
    return 0;
}
