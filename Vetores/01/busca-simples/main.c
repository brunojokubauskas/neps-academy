#include <stdio.h>

int main() {
    int x, marcador = 1, vetor[10];

    for (int i=0; i<10; i++) {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &x);

    for (int i=0; i<10; i++) {
        if (vetor[i] == x) {
            printf("SIM");
            marcador = 0;
            break;
        }
    }

    if (marcador == 1) {
        printf("NAO");
    }
    return 0;
}
