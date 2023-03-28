#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ponteiro; //Crio ponteiro de arquivo...
    ponteiro = fopen("arquivo.txt", "w");
    if(ponteiro == NULL){
        printf("Erro ao abrir o arquivo.\n");
    }else{
        fputc('Neps Academy', ponteiro);
        printf("Abriu o arquivo.\n");
    }


return 0;
}
