#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    int *p;
    p = &x;
    printf("%d\n", *p);
    //Vai imprimir para onde o P esta apontando na posição de memoria,  nesse caso o X.
    x = 7;
    printf("%d\n", *p);
    //saida = 7
    *p = 1;
    printf("%d\n", x);


}
