#include <stdio.h>

// Defini��o da struct prova
struct prova {
  int nota;
  int peso;
};

int main() {
  struct prova A, B, C;
  scanf("%d %d", &A.nota, &A.peso);
  scanf("%d %d", &B.nota, &B.peso);
  scanf("%d %d", &C.nota, &C.peso);

  printf("%d\n", ((A.nota*A.peso) + (B.nota*B.peso) + (C.nota*C.peso)) / (A.peso+B.peso+C.peso));
  return 0;
}
