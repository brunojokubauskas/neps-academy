#include <stdio.h>
#include <stdlib.h>

struct par {
    int x;
    int y;
};
typedef struct par par;
//A fun��o est� recebendo uma fun��o de mem�ria...
void teste(par *p){
    p -> x = 2;
    p -> y = 3;
}
int main(){
    par x;
    par *p = &x;

    //Acessando a partir de uma posi��o de  mem�ria...

    p -> x = 1;
    teste(&x);
    x.y = 2;
    printf("%d %d\n", x.x, x.y);
}
