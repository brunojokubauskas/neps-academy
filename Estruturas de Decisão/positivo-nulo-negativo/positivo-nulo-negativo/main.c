#include <stdio.h>

int main(){
	int X;
	scanf("%d",&X);

	if(X > 0) {
		printf("positivo");
	}

	if(X == 0) {
		printf("nulo");
	}

	if(X < 0) {
		printf("negativo");
	}
}
