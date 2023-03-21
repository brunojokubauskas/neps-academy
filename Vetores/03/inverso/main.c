#include <stdio.h>

int main() {
    int sequencia[10];

    for (int i=0; i<10; i++) {
        scanf("%d", &sequencia[i]);
    }

    for (int i=9; i>=0; i--) {
        printf("%d\n", sequencia[i]);
    }

    return 0;
}
