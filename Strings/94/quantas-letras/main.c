#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[100];
    char c;
scanf("%s %c", s, &c);
int total = 0;
for(int i = 0; i < strlen(s);i++){
    if(s[i] == c)
        total++;
}

printf("%d\n", total);
return 0;
}
