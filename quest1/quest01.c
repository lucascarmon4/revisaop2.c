#include <stdio.h>


int main(){
    int i, n[5];
    for(i=0; i<5; i++) {
        scanf("%d", &n[i]);
    }
    for(i=0;i<5;i++) {
        if(n[i] < 0) {
            printf("0\n");
        } else {
            printf("%d\n", n[i]);
        }
    }
    return 0;
}
