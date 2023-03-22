#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char n1[20] = "abcabc";
    char n2[20] = "abcabc";

if( strcmp(n1, n2) == 0){
    printf("strings iguais\n");
}

if(strcmp(n1, n2) == -1){
   printf("primeira  menor\n");
}

if(strcmp(n1, n2) == 1){
    printf("segunda menor\n");
}
return 0;
}
