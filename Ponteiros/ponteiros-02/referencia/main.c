#include <stdio.h>
#include <stdlib.h>
//Modularazição
int troca(int a, int b){
    int aux = a;
a = b;
b = aux;
printf("Troca -> a = %d e b = %d\n", a, b);

int main(){
    int a = 1;
    int b = 2;

    printf("main -> a %d e b = %d\n", a, b);
    troca(a, b);
    printf("main -> a = %d e b %d\n", a, b);
}

/*Saida
main -> a = 1 e b = 2
troca -> a = 2 e b = 1
main -> a = 1 e b = 2
*/

