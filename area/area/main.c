#include <stdio.h>

int main(){
	float R, area, pi=3.1416;

	scanf("%f", &R);

    area = pi*(R*R);

	printf("%.2f", area);

	return 0;
}
