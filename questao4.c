// A multiplicacao de dois numeros inteiros pode ser feita mediante somas
// sucessivas. Implemente uma funcao recursiva, em C, que realize tal multiplicacao

#include <stdio.h>

// Funcao recursiva que realiza a multiplicacao de dois numeros inteiros
int multiplica(int a, int b) {
  if (b == 0) {
    return 0;
  } else {
    return a + multiplica(a, b - 1);
  }
}

int main() {
  int a, b;
  printf("Digite o valor de a: ");
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);
  printf("%d x %d = %d", a, b, multiplica(a, b));

  return 0;
}