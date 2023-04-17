#include <stdio.h>
#include <stdlib.h>

struct par {
    int x;
    int y;
};
typedef struct par par;
int main(){
    par x;
    par *p = &x;

    //Acessando a partir de uma posição de  memória...
    p -> x = 1;
    x.y = 2;
    printf("%d %d\n", x.x, x.y);
}
