#include <stdio.h>
#include <stdlib.h>

int f(int x){
    if(x == 0){//Caso base
        return 1;
    }else { // recursão
        return x * f(x-1);
    }
}
int main(){
    int N;
    scanf"%d", &N);

    printf("O fatorial de %d eh %d\n", N, f(N));
}
