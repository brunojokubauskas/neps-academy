#include <stdio.h>
#include <stdlib.h>

int main(){{
    int x, marcador = 1,  vetor[10];
    //Lendo o vetor...
    for(int i = 0; i < 10;i++){
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &d);

    for(int i = 0; i < 10;i ++){
        if(vetor[i] == x){
            printf("SIM");
            marcador = 0;
            break;
        }
    }

    if (marcador == 1){
        printf("NAO");
    }
return 0;
}
