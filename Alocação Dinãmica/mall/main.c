#include <stdio.h>
#include <stdlib.h>//Aloca�ao lib

int main(){
    int *p;
    p = (int*)malloc(sizeof(int)* 2);
    p[0] = 4;
    *(p+1) = 5;
    printf("%d %d\n", p[0], p[1]);
    //Desalocando o espa�o da mem�ria...
    free(p);

return 0;
}
