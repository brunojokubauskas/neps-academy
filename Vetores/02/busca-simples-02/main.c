#include <stdio.h>

int main() {
    int vetor[10], x, i, count = 0, indices[10], j = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < 10; i++) {
        if (vetor[i] == x) {
            count++;
            indices[j] = i;
            j++;
        }
    }

    if (count > 0) {
        printf("%d\n", count);
        for (i = 0; i < count; i++) {
            printf("%d ", indices[i]);
        }
    }

    else {
        printf("Mia x", x);
    }

    return 0;
}
