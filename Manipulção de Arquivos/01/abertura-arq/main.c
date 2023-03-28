#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *ponteiro; //Ponteiro do tipo FILE
ponteiro = fopen("arquivo.txt", "w");
if(ponteiro == NULL){
    printf("Erro ao abrir o arquivo.\n");
}else {
    printf("Abriu o arquivo.\n");
}

return 0;


}
