#include <stdio.h>
#include <stdlib.h>
    struct aluno {
        char nome[50];
        int idade;
    };


int main(){
//Aqui vamos utilizar a struct...
 struct aluno x = "Neps", 27; //Criando a vari�vel do tipo struct aluno...
 printf("Nome: %s\n",x.nome);
 printf("Idade: %d\n", x.idade);

}
